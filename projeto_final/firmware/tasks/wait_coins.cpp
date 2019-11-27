/*
 * wait_coins.cpp
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
 * \brief Wait coins task implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.4.11
 * 
 * \date 26/11/2019
 * 
 * \addtogroup wait_coins
 * \{
 */

#include <string>

#include <vending_machine.h>
#include <os/delay.h>

#include "wait_coins.h"
#include "read_option.h"

using namespace std;
using namespace vmos;

unsigned int wait_coins_timeout_counter;
float wait_coins_total_value;

void suspend_task()
{
    wait_coins_timeout_counter = 0;

    wait_coins_total_value = 0;

    for(unsigned int i=0;i<vending_machine.tasks.size(); i++)
    {
        if (vending_machine.tasks[i]->get_name() == TASK_WAIT_COINS_NAME)
        {
            vending_machine.tasks[i]->suspend();

            break;
        }
    }

    for(unsigned int i=0;i<vending_machine.tasks.size(); i++)
    {
        if (vending_machine.tasks[i]->get_name() == TASK_READ_OPTION_NAME)
        {
            vending_machine.tasks[i]->resume();

            break;
        }
    }
}

void TaskWaitCoins::init()
{
    this->set_name(TASK_WAIT_COINS_NAME);

    this->set_period(2000);    // 2000 ticks = 2000 ms

    this->set_priority(5);     // High priority

    this->suspend();

    wait_coins_timeout_counter = 0;

    wait_coins_total_value = 0;
}

void TaskWaitCoins::run()
{
    vending_machine.display->clear();

    vending_machine.display->write(vending_machine.drinks_buffer.get_name());
    vending_machine.display->write(": R$");
    vending_machine.display->write(to_string(vending_machine.drinks_buffer.get_price()));
    vending_machine.display->write("\n\r");

    vending_machine.display->write("Waiting coins...\n\r");

    Delay delay(this->timer);

    if (vending_machine.coin_changer->coin_available())
    {
        wait_coins_timeout_counter = 0;

        vending_machine.display->clear();

        Coin inserted_coin(vending_machine.coin_changer->read());

        wait_coins_total_value += inserted_coin.get_value();

        if (inserted_coin.get_value() != 0)
        {
            vending_machine.display->write("Inserted value: R$");
            vending_machine.display->write(to_string(wait_coins_total_value));
            vending_machine.display->write("\n\r");

            delay.wait_ms(2000);

            if (wait_coins_total_value == vending_machine.drinks_buffer.get_price())
            {
                vending_machine.can_dispenser->release_can(stoi(vending_machine.drinks_buffer.get_id()));

                delay.wait_ms(2000);

                suspend_task();
            }
            else if (wait_coins_timeout_counter > vending_machine.drinks_buffer.get_price())
            {
                // Exchange
                vending_machine.coin_changer->give_change(wait_coins_total_value - vending_machine.drinks_buffer.get_price());

                delay.wait_ms(1000);

                // Drink
                vending_machine.can_dispenser->release_can(stoi(vending_machine.drinks_buffer.get_id()));

                delay.wait_ms(2000);

                suspend_task();
            }
            else
            {
                // No enough coins
            }
        }
    }

    wait_coins_timeout_counter++;

    if (wait_coins_timeout_counter >= 5)
    {
        if (wait_coins_total_value > 0)
        {
            vending_machine.coin_changer->give_change(wait_coins_total_value);

            delay.wait_ms(2000);
        }

        suspend_task();
    }
}

//! \} End of wait_coins group
