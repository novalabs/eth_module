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
#include "usbcfg.h"

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

// PHY !POWERDOWN
using PHY_PAD = core::hw::Pad_<core::hw::GPIO_C, GPIOC_ETH_PWRDN>;
static PHY_PAD _phy_not_pwrdown;

// SERIALS
using SDU_1_STREAM = core::os::SDChannelTraits<core::hw::SDU_1>;
using SD_3_STREAM  = core::os::SDChannelTraits<core::hw::SD_3>;
using STREAM       = core::os::IOChannel_<SDU_1_STREAM, core::os::IOChannel::DefaultTimeout::INFINITE>;
using SERIAL       = core::os::IOChannel_<SD_3_STREAM, core::os::IOChannel::DefaultTimeout::INFINITE>;
static STREAM _stream;
static SERIAL _serial;

// MODULE DEVICES
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
        core::mw::Middleware::instance().initialize(name(), management_thread_stack, management_thread_stack.size(), core::os::Thread::LOWEST);
        rtcantra.initialize(rtcan_config, canID());
        core::mw::Middleware::instance().start();

        sduObjectInit(core::hw::SDU_1::driver);
        sduStart(core::hw::SDU_1::driver, &serusbcfg);
        sdStart(core::hw::SD_3::driver, nullptr);

        usbDisconnectBus(serusbcfg.usbp);
        chThdSleepMilliseconds(1500);
        usbStart(serusbcfg.usbp, &usbcfg);
        usbConnectBus(serusbcfg.usbp);

        initialized = true;
    }

    return initialized;
} // Board::initialize

void
Module::enablePHY()
{
    _phy_not_pwrdown.set();
}

void
Module::disablePHY()
{
    _phy_not_pwrdown.clear();
}

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
