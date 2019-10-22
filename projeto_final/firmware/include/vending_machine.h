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
 * \version 0.1.2
 * 
 * \date 21/10/2019
 * 
 * \defgroup vending_machine Vending Machine
 * \{
 */

#ifndef VENDING_MACHINE_H_
#define VENDING_MACHINE_H_

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
};

#endif // VENDING_MACHINE_H_

//! \} End of vending_machine group
