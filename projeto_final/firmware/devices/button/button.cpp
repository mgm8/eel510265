/*
 * button.cpp
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
 * \brief Button implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.3
 * 
 * \date 21/10/2019
 * 
 * \addtogroup button
 * \{
 */

#include "button.h"

using namespace std;

Button::Button()
{
}

Button::Button(string label)
    : Button()
{
    this->set_label(label);
}

Button::~Button()
{
}

bool Button::is_pressed()
{
    return false;
}

void Button::set_label(string label)
{
    this->label = label;
}

string Button::get_label()
{
    return this->label;
}

//! \} End of button group
