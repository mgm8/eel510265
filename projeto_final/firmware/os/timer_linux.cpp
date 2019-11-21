/*
 * timer_linux.cpp
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
 * \brief Timer (Linux) implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.3.7
 * 
 * \date 17/11/2019
 * 
 * \addtogroup timer_linux
 * \{
 */

#include <thread>
#include <chrono>

#include "timer_linux.h"

using namespace std;

namespace vmos
{

void TimerLinux::start()
{
    thread timer(&TimerLinux::run, this);

    timer.detach();
}

void TimerLinux::run()
{
    while(1)
    {
        this_thread::sleep_for(chrono::milliseconds(this->tick_period_ms));

        this->ticks++;

        this->update_tasks_table();
    }
}

}   // namespace vmos

//! \} End of timer_linux group
