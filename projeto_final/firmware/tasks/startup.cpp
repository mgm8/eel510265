/*
 * startup.cpp
 * 
 * Copyright (C) 2019, Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * This file is part of eel510265-final-project.
 * 
 * eel510265-final-project is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * eel510265-final-project is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with eel510265-final-project. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief Startup task implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.4.5
 * 
 * \date 20/11/2019
 * 
 * \addtogroup startup
 * \{
 */

#include <vending_machine.h>

#include "startup.h"

using namespace vmos;

void TaskStartup::init()
{
    this->set_name("startup");

    this->set_period(50);       // 50 ticks = 500 ms

    this->set_priority(10);     // High priority
}

void TaskStartup::run()
{
    // System initialization
    vending_machine.setup();

    // Suspend the task
    this->suspend();
}

//! \} End of startup group
