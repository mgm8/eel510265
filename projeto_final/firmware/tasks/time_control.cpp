/*
 * time_control.cpp
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
 * \brief Time control task implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.4.7
 * 
 * \date 24/11/2019
 * 
 * \addtogroup time_control
 * \{
 */

#include "vending_machine.h"
#include "time_control.h"

void TaskTimeControl::init()
{
    this->set_name("time_control");

    this->set_period(1000);  // 1000 ticks = 1000 ms

    this->set_priority(1);
}

void TaskTimeControl::run()
{
    // Increment the system time by 1 second
    vending_machine.datetime.increment();
}

//! \} End of time_control group
