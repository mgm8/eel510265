/*
 * menu.cpp
 * 
 * Copyright (C) 2019, Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * This file is part of EEL510265-Aula-02.
 * 
 * EEL510265-Aula-02 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * EEL510265-Aula-02 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with EEL510265-Aula-02. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief Main menu implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 01/09/2019
 * 
 * \addtogroup menu
 * \{
 */

#include <iostream>

#include "menu.h"

using namespace std;

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::print_main_menu()
{
    cout << "Main menu:" << endl;
    cout << endl;
    cout << "\t" << "1 - " << "Add a new student"   << endl;
    cout << "\t" << "2 - " << "Add a new grade"     << endl;
    cout << "\t" << "3 - " << "List all students"   << endl;
    cout << "\t" << "4 - " << "Exit"                << endl;
    cout << endl;
}

unsigned int Menu::get_option()
{
    cout << "Option: ";
    unsigned int o;
    cin >> o;

    return o;
}

//! \} End of menu group
