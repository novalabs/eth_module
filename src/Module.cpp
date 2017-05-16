/* COPYRIGHT (c) 2016-2017 Nova Labs SRL
 *
 * All rights reserved. All use of this software and documentation is
 * subject to the License Agreement located in the file LICENSE.
 */

#include <core/mw/Middleware.hpp>
#include <core/mw/transport/RTCANTransport.hpp>

#include "ch.h"
#include "hal.h"
#include "usbcfg.h"

#include <core/hw/GPIO.hpp>
#include <core/hw/SD.hpp>
#include <core/hw/SDU.hpp>
#include <core/hw/UID.hpp>
#include <core/os/Thread.hpp>
#include <Module.hpp>


using LED_PAD = core::hw::Pad_<core::hw::GPIO_E, GPIOE_LED>;
static LED_PAD _led;

using SD_LED_PAD = core::hw::Pad_<core::hw::GPIO_A, GPIOA_SD_LED>;
static SD_LED_PAD _sd_led;

using SDU_1_STREAM = core::os::SDChannelTraits<core::hw::SDU_1>;
using SD_1_STREAM  = core::os::SDChannelTraits<core::hw::SD_1>;

using STREAM = core::os::IOChannel_<SDU_1_STREAM, core::os::IOChannel::DefaultTimeout::INFINITE>;
using SERIAL = core::os::IOChannel_<SD_1_STREAM, core::os::IOChannel::DefaultTimeout::INFINITE>;

static STREAM        _stream;
core::os::IOChannel& Module::stream = _stream;

static SERIAL        _serial;
core::os::IOChannel& Module::serial = _serial;

core::hw::Pad& Module::sd_led = _sd_led;

using PHY_PAD = core::hw::Pad_<core::hw::GPIO_C, GPIOC_ETH_PWRDN>;
static PHY_PAD _phy_not_pwrdown;

static core::mw::RTCANTransport      rtcantra(&RTCAND1);
static core::os::Thread::Stack<2048> management_thread_stack;

RTCANConfig rtcan_config = {
    1000000, 100, 60
};

// ----------------------------------------------------------------------------
// CoreModule STM32FlashConfigurationStorage
// ----------------------------------------------------------------------------
#include <core/snippets/CoreModuleSTM32FlashConfigurationStorage.hpp>
// ----------------------------------------------------------------------------

core::mw::Middleware
core::mw::Middleware::instance(
    ModuleConfiguration::MODULE_NAME
);


Module::Module()
{}

bool
Module::initialize()
{
//	core_ASSERT(core::mw::Middleware::instance.is_stopped()); // TODO: capire perche non va...

    static bool initialized = false;

    if (!initialized) {
        /*
        * Initializes a serial-over-USB CDC driver.
        */
        sduObjectInit(core::hw::SDU_1::driver);
        sduStart(core::hw::SDU_1::driver, &serusbcfg);
        sdStart(core::hw::SD_1::driver, nullptr);

        //sdcStart(&SDCD1, NULL);

        //sdStart(core::hw::SD_1::driver, nullptr);

        /*
         * Activates the USB driver and then the USB bus pull-up on D+.
         * Note, a delay is inserted in order to not have to disconnect the cable
         * after a reset.
         */
        usbDisconnectBus(serusbcfg.usbp);
        chThdSleepMilliseconds(1500);
        usbStart(serusbcfg.usbp, &usbcfg);
        usbConnectBus(serusbcfg.usbp);


        core::mw::Middleware::instance.initialize(moduleName(), management_thread_stack, management_thread_stack.size(), core::os::Thread::LOWEST);
        rtcantra.initialize(rtcan_config, moduleID());
        core::mw::Middleware::instance.start();

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
// CoreModule HW specific implementation
// ----------------------------------------------------------------------------
#include <core/snippets/CoreModuleHWSpecificImplementation.hpp>
// ----------------------------------------------------------------------------
