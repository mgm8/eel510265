/*
 * read_option.cpp
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
 * \brief Read user option task implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.5.2
 * 
 * \date 26/11/2019
 * 
 * \addtogroup read_option
 * \{
 */

#include <string>

#include <vending_machine.h>
#include <drink.h>

#include "read_option.h"
#include "wait_coins.h"

using namespace std;
using namespace vmos;

void TaskReadOption::init()
{
    this->set_name(TASK_READ_OPTION_NAME);

    this->set_period(1050);     // 1050 ticks = 1050 ms

    this->set_priority(4);
}

void TaskReadOption::run()
{
    vending_machine.display->clear();

    // Print instruction on the display
    vending_machine.display->write("Select an option\n\r");

    // Read the input interface
    int option = vending_machine.interface->read();

    vending_machine.display->clear();

    // Verify if a drink was selected
    if ((option != INTERFACE_NONE_PRESSED) and (option != INTERFACE_DEV_PRESSED))
    {
        switch(option)
        {
            case INTERFACE_MEETS_PRESSED:
                vending_machine.drinks_buffer = Drink(to_string(DRINK_MEETS), "MEETS", 1.5);
                break;
            case INTERFACE_ETIRPS_PRESSED:
                vending_machine.drinks_buffer = Drink(to_string(DRINK_ETIRPS), "ETIRPS", 1.5);
                break;
        }

        // Suspend the task to resume the "wait_coins" task
        this->suspend();

        // Resume the "wait_coins" task by its name
        for(unsigned int i=0;i<vending_machine.tasks.size(); i++)
        {
            if (vending_machine.tasks[i]->get_name() == TASK_WAIT_COINS_NAME)
            {
                vending_machine.tasks[i]->resume();

                break;
            }
        }
    }
}

//! \} End of startup group
