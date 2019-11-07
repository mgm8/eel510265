/*
 * clock.cpp
 * 
 * Copyright (C) 2019, Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * This file is part of EEL510265-Aula-03.
 * 
 * EEL510265-Aula-03 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * EEL510265-Aula-03 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with EEL510265-Aula-03. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief Clock class implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.7
 * 
 * \date 01/09/2019
 * 
 * \addtogroup clock
 * \{
 */

#include "clock.h"

using namespace std;

Clock::Clock()
    : second(0),
      minute(0),
      hour(0)
{
}

Clock::Clock(unsigned int h, unsigned int m, unsigned int s)
    : Clock()
{
    this->hour = h;
    this->minute = m;
    this->second = s;
}

Clock::~Clock()
{
}

void Clock::increment(unsigned int val)
{
    this->second += val;

    if (this->second >= 60)
    {
        this->second = 0;
        this->minute++;
    }

    if (this->minute >= 60)
    {
        this->minute = 0;
        this->hour++;
    }
}

string Clock::get_time()
{
    string time_str;

    time_str += to_string(this->hour);
    time_str += ":";
    time_str += to_string(this->minute);
    time_str += ":";
    time_str += to_string(this->second);

    return time_str;
}

ostream& operator<<(ostream& os, const Clock& clock)
{
    os << clock.hour << ":" << clock.minute << ":" << clock.second;

    return os;
}

//! \} End of clock group
