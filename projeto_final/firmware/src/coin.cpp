/*
 * coid.cpp
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
 * \brief Coin implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.1
 * 
 * \date 20/10/2019
 * 
 * \addtogroup coin
 * \{
 */

#include "coin.h"

Coin::Coin()
{
    this->set_value(COIN_DEFAULT_VALUE);
}

Coin::Coin(float val)
{
    this->set_value(val);
}

Coin::~Coin()
{
}

void Coin::set_value(float val)
{
    this->value = val;
}

float Coin::get_value()
{
    return this->value;
}

bool Coin::operator ==(Coin other)
{
    return this->get_value() == other.get_value();
}

bool Coin::operator !=(Coin other)
{
    return this->get_value() != other.get_value();
}

//! \} End of coin group
