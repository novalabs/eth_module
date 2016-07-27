/* COPYRIGHT (c) 2016 Nova Labs SRL
 *
 * All rights reserved. All use of this software and documentation is
 * subject to the License Agreement located in the file LICENSE.
 */

#pragma once

#include <core/mw/CoreModule.hpp>
#include <ModuleConfiguration.hpp>


class Module:
	public core::mw::CoreModule
{
public:
	static bool
	initialize();

// --- Ethernet PHY control ---------------------------------------------------
	static void enablePHY();
	static void disablePHY();
// ----------------------------------------------------------------------------

	Module();
	virtual ~Module() {}
};

