#pragma once

#include <core/mw/CoreModule.hpp>
#include <ModuleConfiguration.hpp>


class Module:
	public core::mw::CoreModule
{
public:
	static bool
	initialize();

	static void enablePHY();
	static void disablePHY();

	Module();
	virtual ~Module() {}
};

