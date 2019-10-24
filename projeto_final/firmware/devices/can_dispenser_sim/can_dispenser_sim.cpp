/*
 * can_dispenser_sim.cpp
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
 * \brief Can dispenser simulation implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.15
 * 
 * \date 24/10/2019
 * 
 * \addtogroup can_dispenser_sim
 * \{
 */

#include <iostream>

#include <soda.h>

#include "can_dispenser_sim.h"

using namespace std;

int CanDispenserSim::init()
{
    return CAN_DISPENSER_STATUS_OK;
}

bool CanDispenserSim::is_empty()
{
    return true;
}

int CanDispenserSim::release_can(unsigned int op)
{
    switch(op)
    {
        case SODA_MEETS:
            cout << "MEETS released!" << endl;
            break;
        case SODA_ETIRPS:
            cout << "ETIRPS released!" << endl;
            break;
        default:
            return CAN_DISPENSER_STATUS_ERROR;
    }

    return CAN_DISPENSER_STATUS_OK;
}

//! \} End of can_dispenser_sim group
