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
 * \version 0.2.10
 * 
 * \date 17/11/2019
 * 
 * \addtogroup timer
 * \{
 */

#include "timer.h"

using namespace std;

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

void Timer::set_ticks(uint64_t t)
{
    this->ticks = t;
}

uint64_t Timer::get_ticks()
{
    return this->ticks;
}

uint32_t Timer::get_milliseconds()
{
    return this->ticks_to_milliseconds(this->get_ticks());
}

uint32_t Timer::get_seconds()
{
    return this->ticks_to_seconds(this->get_ticks());
}

uint32_t Timer::ticks_to_milliseconds(uint64_t t)
{
    return this->tick_period_ms*t;
}

uint32_t Timer::ticks_to_seconds(uint64_t t)
{
    return this->ticks_to_milliseconds(t)/1000;
}

void Timer::run()
{
}

//! \} End of timer group
