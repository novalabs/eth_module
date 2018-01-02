/* COPYRIGHT (c) 2016-2018 Nova Labs SRL
 *
 * All rights reserved. All use of this software and documentation is
 * subject to the License Agreement located in the file LICENSE.
 */

#pragma once

#include <core/mw/CoreModule.hpp>
#include <core/os/IOChannel.hpp>
#define SDC_POLLING_INTERVAL  1
#define SDC_POLLING_DELAY     100
#include <core/hw/SDC.hpp>
#include <ModuleConfiguration.hpp>

namespace core {
namespace hw {
class Pad;
}
}

class Module:
    public core::mw::CoreModule
{
public:
// --- DEVICES ----------------------------------------------------------------
    static core::hw::Pad& sd_led;

    static core::os::IOChannel& stream;
    static core::os::IOChannel& serial;

    static core::hw::SDC_<core::hw::SDC_1> sdc;
// ----------------------------------------------------------------------------

    static bool
    initialize();


    Module();
    virtual ~Module() {}
};
