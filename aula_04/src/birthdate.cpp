/*
 * birthdate.cpp
 * 
 * Copyright (C) 2019, Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * This file is part of EEL510265-Aula-04.
 * 
 * EEL510265-Aula-04 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * EEL510265-Aula-04 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with EEL510265-Aula-02. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief Birthdate class implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 08/09/2019
 * 
 * \addtogroup birthdate
 * \{
 */

#include "birthdate.h"

using namespace std;

Birthdate::Birthdate()
{
}

Birthdate::Birthdate(unsigned int y, unsigned int m, unsigned int d)
    : Birthdate()
{
    this->year  = y;
    this->month = m;
    this->day   = d;
}

Birthdate::~Birthdate()
{
}

ostream& operator<<(ostream& os, const Birthdate& birthdate)
{
    os << birthdate.year << "/" << birthdate.month << "/" << birthdate.day;

    return os;
}

//! \} End of birthdate group
