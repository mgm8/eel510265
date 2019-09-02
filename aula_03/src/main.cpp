/*
 * main.cpp
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
 * \brief Main file.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 01/09/2019
 * 
 * \defgroup main Main
 * \{
 */

#include <iostream>
#include <unistd.h>

#include "clock_calendar.h"

using namespace std;

int main(int argc, char *argv[])
{
    ClockCalendar clock_calendar;

    while(1)
    {
        cout << clock_calendar << endl;

        clock_calendar.increment();

        sleep(1);
    }

    return 0;
}

//! \} End of main group
