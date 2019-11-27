/*
 * vending_machine.cpp
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
 * \brief Vending machine implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.5.3
 * 
 * \date 21/10/2019
 * 
 * \addtogroup vending_machine
 * \{
 */

#include <string>

#include "vending_machine.h"

#include <terminal/terminal.h>
#include <keyboard/keyboard.h>
#include <coin_changer_sim/coin_changer_sim.h>
#include <can_dispenser_sim/can_dispenser_sim.h>

#include <version.h>

using namespace std;

VendingMachine vending_machine;

VendingMachine::VendingMachine()
{
}

VendingMachine::~VendingMachine()
{
    delete this->display;
    delete this->interface;
    delete this->coin_changer;
    delete this->can_dispenser;
}

int VendingMachine::setup()
{
    this->display = new Terminal;
    this->interface = new Keyboard;
    this->coin_changer = new CoinChangerSim;
    this->can_dispenser = new CanDispenserSim;

    if (this->display->init() != DISPLAY_STATUS_OK)
    {
        return -1;
    }

    this->display->clear();
    this->display->write("Vending Machine v");
    this->display->write(FIRMWARE_VERSION);
    this->display->write("\n\r");

    if (this->interface->init() != INTERFACE_STATUS_OK)
    {
        this->display->write("Error initializing the interface!\n\r");

        return -1;
    }

    if (this->coin_changer->init() != COIN_CHANGER_STATUS_OK)
    {
        this->display->write("Error initializing the coin changer!\n\r");

        return -1;
    }

    if (this->can_dispenser->init() != CAN_DISPENSER_STATUS_OK)
    {
        this->display->write("Error initializing the can dispenser!\n\r");

        return -1;
    }

    return 1;
}

//! \} End of vending_machine group
