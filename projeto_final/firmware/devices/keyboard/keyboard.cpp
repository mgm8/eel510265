/*
 * keyboard.cpp
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
 * \brief Keyboard interface implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.3
 * 
 * \date 22/10/2019
 * 
 * \addtogroup keyboard
 * \{
 */

#include <iostream>

#include "keyboard.h"

using namespace std;

int Keyboard::init()
{
    return INTERFACE_STATUS_OK;
}

int Keyboard::read()
{
    cout << "\t" << "1 - MEETS" << endl;
    cout << "\t" << "2 - ETIRPS" << endl;;
    cout << "\t" << "3 - DEV" << endl;;
    cout << "Option: ";

    int option;
    cin >> option;

    cout << endl;

    switch(option)
    {
        case INTERFACE_MEETS_PRESSED:   break;
        case INTERFACE_ETIRPS_PRESSED:  break;
        case INTERFACE_DEV_PRESSED:     break;
        default:                        return INTERFACE_STATUS_ERROR;
    }

    return option;
}

//! \} End of keyboard group
