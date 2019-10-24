/*
 * drink.cpp
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
 * \brief Drink implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.4
 * 
 * \date 20/10/2019
 * 
 * \addtogroup drink
 * \{
 */

#include "drink.h"

using namespace std;

Drink::Drink()
{
    this->set_name(DRINK_DEFAULT_NAME);
    this->set_price(DRINK_DEFAULT_PRICE);
}

Drink::Drink(string id, string name, float price)
{
    this->set_id(id);
    this->set_name(name);
    this->set_price(price);
}

Drink::~Drink()
{
}

void Drink::set_id(string id)
{
    this->id = id;
}

string Drink::get_id()
{
    return this->id;
}

void Drink::set_name(string name)
{
    this->name = name;
}

string Drink::get_name()
{
    return this->name;
}

void Drink::set_price(float price)
{
    this->price = price;
}

float Drink::get_price()
{
    return this->price;
}

//! \} End of drink group
