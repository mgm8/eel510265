/*
 * terminal.cpp
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
 * \brief Terminal device implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.9
 * 
 * \date 22/10/2019
 * 
 * \addtogroup terminal
 * \{
 */

#include <iostream>

#include "terminal.h"

using namespace std;

int Terminal::init()
{
    return DISPLAY_STATUS_OK;
}

int Terminal::write(string text)
{
    cout << text;

    return DISPLAY_STATUS_OK;
}

int Terminal::clear()
{
    this->write("\033[2J");     // Clears the entire screen
    this->write("\033[1;1H");   // Positions the cursor at row 1, column 1

    return DISPLAY_STATUS_OK;
}

//! \} End of terminal group
