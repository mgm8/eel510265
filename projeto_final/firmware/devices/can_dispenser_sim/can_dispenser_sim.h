/*
 * can_dispenser_sim.h
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
 * \brief Can dispenser simulation definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.12
 * 
 * \date 24/10/2019
 * 
 * \defgroup can_dispenser_sim Can dispenser simulation
 * \ingroup can_dispenser
 * \{
 */

#ifndef CAN_DISPENSER_SIM_H_
#define CAN_DISPENSER_SIM_H_

#include <can_dispenser.h>

/**
 * \brief Can dispenser simulation.
 */
class CanDispenserSim: public CanDispenser
{
    public:

        /**
         * \brief Can dispenser initialization.
         *
         * \return Error/status code.
         */
        int init();

        /**
         * \brief Verifies if the can dispenser is empty.
         *
         * \return TRUE/FALSE if the can dispenser is empty or not.
         */
        bool is_empty();

        /**
         * \brief Releases a new can.
         *
         * \param[in] op is the can type to release. It can be:
         * \parblock
         *      - DRINK_MEETS
         *      - DRINK_ETIRPS
         *      .
         * \endparblock
         *
         * \return Error/status code.
         */
        int release_can(unsigned int op);
};

#endif // CAN_DISPENSER_SIM_H_

//! \} End of can_dispenser_sim group
