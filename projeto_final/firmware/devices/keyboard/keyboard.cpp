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
 * \version 0.5.2
 * 
 * \date 22/10/2019
 * 
 * \addtogroup keyboard
 * \{
 */

#include <iostream>

#include <sys/select.h>
#include <unistd.h>

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
    cout << "Option: " << endl;

    // Below cin operation should be executed within stipulated period of time
    fd_set read_set;
    FD_ZERO(&read_set);
    FD_SET(STDIN_FILENO, &read_set);
    struct timeval tv = {1, 0};     // 1 second, 0 microseconds

    if (select(STDIN_FILENO + 1, &read_set, NULL, NULL, &tv) < 0)
    {
        perror("Error on keyboard!");
    }

    int option;

    if (FD_ISSET(STDIN_FILENO, &read_set))
    {
        cin >> option;
    }

    cout << endl;

    switch(option)
    {
        case INTERFACE_MEETS_PRESSED:   break;
        case INTERFACE_ETIRPS_PRESSED:  break;
        default:                        return INTERFACE_NONE_PRESSED;
    }

    return option;
}

//! \} End of keyboard group
