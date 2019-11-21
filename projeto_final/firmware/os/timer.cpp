/*
 * timer.cpp
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
 * \brief Timer implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.3.7
 * 
 * \date 17/11/2019
 * 
 * \addtogroup timer
 * \{
 */
#include <iostream>
#include "timer.h"

using namespace std;

namespace vmos
{

Timer::Timer()
{
    this->set_ticks(0);
    this->set_tick_period(1);
}

Timer::Timer(unsigned int p)
    : Timer()
{
    this->set_tick_period(p);

    this->start();
}

Timer::~Timer()
{
}

void Timer::start()
{
}

void Timer::set_tick_period(unsigned int p)
{
    this->tick_period_ms = p;
}

void Timer::set_ticks(Tick t)
{
    this->ticks = t;
}

void Timer::set_tasks_table(List<Task *> *t)
{
    this->tasks_table = t;
}

Tick Timer::get_ticks()
{
    return this->ticks;
}

Tick Timer::get_milliseconds()
{
    return this->ticks_to_milliseconds(this->get_ticks());
}

Tick Timer::get_seconds()
{
    return this->ticks_to_seconds(this->get_ticks());
}

Tick Timer::ticks_to_milliseconds(Tick t)
{
    return this->tick_period_ms*t;
}

Tick Timer::ticks_to_seconds(Tick t)
{
    return this->ticks_to_milliseconds(t)/1000;
}

void Timer::update_tasks_table()
{
    for(unsigned int i=0; i<this->tasks_table->size(); i++)
    {
        if (this->tasks_table->at(i)->is_enabled() and (this->tasks_table->at(i)->delay != 0))
        {
            this->tasks_table->at(i)->delay--;

            if (this->tasks_table->at(i)->delay == 0)
            {
                this->tasks_table->at(i)->set_ready(true);
                this->tasks_table->at(i)->delay = this->tasks_table->at(i)->get_period();
            }
        }
    }
}

void Timer::run()
{
}

}   // namespace vmos

//! \} End of timer group
