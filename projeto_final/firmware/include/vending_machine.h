/*
 * vending_machine.h
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
 * \brief Vending machine definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.0
 * 
 * \date 21/10/2019
 * 
 * \defgroup vending_machine Vending Machine
 * \{
 */

#ifndef VENDING_MACHINE_H_
#define VENDING_MACHINE_H_

#include "display.h"
#include "interface.h"
#include "coin_changer.h"
#include "can_dispenser.h"
#include "delay.h"

#define VENDING_MACHINE_STATUS_OK       1

/**
 * \brief Vending machine class.
 */
class VendingMachine
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        VendingMachine();

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~VendingMachine();

        /**
         * \brief Setups the vending machine.
         *
         * \return Status code.
         */
        int setup();

        /**
         * \brief Executes the vending machine.
         *
         * \return Error code uppon termination.
         */
        int run();

    private:

        /**
         * \brief User interface.
         */
        Interface *interface;

        /**
         * \brief Messages display.
         */
        Display *display;

        /**
         * \brief Coin changer device.
         */
        CoinChanger *coin_changer;

        /**
         * \brief Can dispenser device.
         */
        CanDispenser *can_dispenser;

        /**
         * \brief Delay.
         */
        Delay *delay;
};

#endif // VENDING_MACHINE_H_

//! \} End of vending_machine group
