/*
 * calendar.cpp
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
 * \brief Calendar class implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 01/09/2019
 * 
 * \addtogroup calendar
 * \{
 */

#include "calendar.h"

using namespace std;

Calendar::Calendar()
    : year(1970),
      month(1),
      day(1)
{
}

Calendar::Calendar(unsigned int y, unsigned int m, unsigned int d)
    : Calendar()
{
    this->year = y;
    this->month = m;
    this->day = d;
}

Calendar::~Calendar()
{
}

void Calendar::increment(unsigned int n)
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

    this->day++;

    if (this->day >= max_month_days)
    {
        this->day = 1;
        this->month++;
    }

    if (this->month >= 12)
    {
        this->month = 1;
        this->year++;
    }
}

string Calendar::get_date()
{
    string date_str;

    date_str += to_string(this->year);
    date_str += "/";
    date_str += to_string(this->month);
    date_str += "/";
    date_str += to_string(this->day);

    return date_str;
}

ostream& operator<<(ostream& os, const Calendar& calendar)
{
    os << calendar.year << ":" << calendar.month << ":" << calendar.day;

    return os;
}

//! \} End of calendar group
