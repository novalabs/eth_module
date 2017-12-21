/* COPYRIGHT (c) 2016-2017 Nova Labs SRL
 *
 * All rights reserved. All use of this software and documentation is
 * subject to the License Agreement located in the file LICENSE.
 */

#include <core/snippets/CortexMxFaultHandlers.h>

#include <core/mw/Middleware.hpp>
#include <core/mw/transport/RTCANTransport.hpp>

#include "ch.h"
#include "hal.h"

#include <core/hw/GPIO.hpp>
#include <core/hw/SD.hpp>
#include <core/hw/SDU.hpp>
#include <core/hw/UID.hpp>
#include <core/hw/IWDG.hpp>
#include <core/os/Thread.hpp>

#include <Module.hpp>

// LED
using LED_PAD = core::hw::Pad_<core::hw::GPIO_E, GPIOE_LED>;
static LED_PAD _led;

// SD LED
using SD_LED_PAD = core::hw::Pad_<core::hw::GPIO_A, GPIOA_SD_LED>;
static SD_LED_PAD _sd_led;

// PHY !RESET
using PHY_RESET_PAD = core::hw::Pad_<core::hw::GPIO_D, GPIOD_ETH_RST>;
static PHY_RESET_PAD _phy_reset;

// USB SERIAL
using SDU_1_STREAM = core::os::SDChannelTraits<core::hw::SDU_1>;
using USBSERIAL    = core::os::IOChannel_<SDU_1_STREAM, core::os::IOChannel::DefaultTimeout::INFINITE>;
static USBSERIAL _stream;

// SERIAL
using SD_3_STREAM = core::os::SDChannelTraits<core::hw::SD_3>;
using STREAM       = core::os::IOChannel_<SDU_1_STREAM, core::os::IOChannel::DefaultTimeout::INFINITE>;
using SERIAL      = core::os::IOChannel_<SD_3_STREAM, core::os::IOChannel::DefaultTimeout::INFINITE>;
static SERIAL _serial;

// MODULE DEVICES
core::hw::SDU _sdu;
core::os::IOChannel& Module::stream = _stream;
core::os::IOChannel& Module::serial = _serial;
core::hw::Pad&       Module::sd_led = _sd_led;

// SYSTEM STUFF
static core::os::Thread::Stack<2048> management_thread_stack;
static core::mw::RTCANTransport      rtcantra(&RTCAND1);

RTCANConfig rtcan_config = {
    1000000, 100, 60
};

Module::Module()
{}

void
usb_disconnect_bus()
{
    palClearPort(GPIOA, (1 << GPIOA_OTG_FS_DM) | (1 << GPIOA_OTG_FS_DP));
    palSetPadMode(GPIOA, GPIOA_OTG_FS_DM, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOA, GPIOA_OTG_FS_DP, PAL_MODE_OUTPUT_PUSHPULL);
}

void
usb_connect_bus()
{
    palClearPort(GPIOA, (1 << GPIOA_OTG_FS_DM) | (1 << GPIOA_OTG_FS_DP));
    palSetPadMode(GPIOA, GPIOA_OTG_FS_DM, PAL_MODE_ALTERNATE(10));
    palSetPadMode(GPIOA, GPIOA_OTG_FS_DP, PAL_MODE_ALTERNATE(10));
}


bool
Module::initialize()
{
#ifdef _DEBUG
    FAULT_HANDLERS_ENABLE(true);
#else
    FAULT_HANDLERS_ENABLE(false);
#endif

    static bool initialized = false;

    if (!initialized) {
        core::mw::CoreModule::initialize();

        _led.setMode(core::hw::Pad::Mode::OUTPUT_PUSHPULL);
        _sd_led.setMode(core::hw::Pad::Mode::OUTPUT_PUSHPULL);

        _led.set();
        _sd_led.clear();

        core::mw::Middleware::instance().initialize(name(), management_thread_stack, management_thread_stack.size(), core::os::Thread::LOWEST);
        rtcantra.initialize(rtcan_config, canID());
        core::mw::Middleware::instance().start();

        _sdu.setDescriptors(core::hw::SDUDefaultDescriptors::static_callback());
        _sdu.init();
        _sdu.start();

        usbDisconnectBus(&USBD1);
        usb_disconnect_bus();
        chThdSleepMilliseconds(1500);
        usbStart(&USBD1, _sdu.usbcfg());
        usb_connect_bus();
        usbConnectBus(&USBD1);

        initialized = true;
    }

    return initialized;
} // Board::initialize

// ----------------------------------------------------------------------------
// CoreModule STM32FlashConfigurationStorage
// ----------------------------------------------------------------------------
#include <core/snippets/CoreModuleSTM32FlashConfigurationStorage.hpp>
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
// CoreModule HW specific implementation
// ----------------------------------------------------------------------------
#include <core/snippets/CoreModuleHWSpecificImplementation.hpp>
// ----------------------------------------------------------------------------
