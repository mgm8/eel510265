/*
 * clock_calendar.cpp
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
 * \brief ClockCalendar class implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 01/09/2019
 * 
 * \addtogroup clock_calendar
 * \{
 */

#include "clock_calendar.h"

using namespace std;

ClockCalendar::ClockCalendar()
    : Clock::Clock(),
      Calendar::Calendar()
{
}

ClockCalendar::ClockCalendar(unsigned int y, unsigned int mon, unsigned int d, unsigned int h, unsigned int m, unsigned int s)
    : ClockCalendar()
{
    this->year      = y;
    this->month     = mon;
    this->day       = d;
    this->hour      = h;
    this->minute    = m;
    this->second    = s;
}

ClockCalendar::~ClockCalendar()
{
}

void ClockCalendar::increment()
{
    unsigned int max_month_days;

    switch(this->month)
    {
        case MONTH_JANUARY:
            max_month_days = 31;
            break;
        case MONTH_FEBRUARY:
            max_month_days = 28;
            break;
        case MONTH_MARCH:
            max_month_days = 31;
            break;
        case MONTH_MAY:
            max_month_days = 31;
            break;
        case MONTH_JULY:
            max_month_days = 31;
            break;
        case MONTH_AUGUST:
            max_month_days = 31;
            break;
        case MONTH_OCTOBER:
            max_month_days = 31;
            break;
        case MONTH_DEZEMBER:
            max_month_days = 31;
            break;
        default:
            max_month_days = 30;
    }

    this->second++;

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

    if (this->hour >= 24)
    {
        this->hour = 0;
        this->day++;
    }

    if (this->day > max_month_days)
    {
        this->day = 1;
        this->month++;
    }

    if (this->month > 12)
    {
        this->month = 1;
        this->year++;
    }
}

string ClockCalendar::get_datetime()
{
    return this->get_date() + " - " + this->get_time();
}

ostream& operator<<(ostream& os, const ClockCalendar& cc)
{
    os << cc.year << "/" << cc.month << "/" << cc.day << " - " << cc.hour << ":" << cc.minute << ":" << cc.second;

    return os;
}

//! \} End of clock_calendar group
