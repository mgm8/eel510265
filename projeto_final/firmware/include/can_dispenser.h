/*
 * can_dispenser.h
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
 * \brief Can dispenser definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.12
 * 
 * \date 22/10/2019
 * 
 * \defgroup can_dispenser Can dispenser
 * \{
 */

#ifndef CAN_DISPENSER_H_
#define CAN_DISPENSER_H_

#define CAN_DISPENSER_STATUS_OK         0
#define CAN_DISPENSER_STATUS_ERROR      1

/**
 * \brief Can dispenser.
 */
class CanDispenser
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        CanDispenser() { };

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~CanDispenser() { };

        /**
         * \brief Can dispenser initialization.
         *
         * \note Pure virtual mehtod.
         *
         * \return Error/status code.
         */
        virtual int init() = 0;

        /**
         * \brief Verifies if the can dispenser is empty.
         *
         * \note Pure virtual mehtod.
         *
         * \return TRUE/FALSE if the can dispenser is empty or not.
         */
        virtual bool is_empty() = 0;

        /**
         * \brief Releases a new can.
         *
         * \note Pure virtual mehtod.
         *
         * \parma[in] op is the can type to release. It can be:
         * \parblock
         *      - SODA_MEETS
         *      - SODA_ETIRPS
         *      .
         * \endparblock
         *
         * \return Error/status code.
         */
        virtual int release_can(unsigned int op) = 0;
};

#endif // CAN_DISPENSER_H_

//! \} End of can_dispenser group
