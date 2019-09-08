/*
 * pessoa.cpp
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
 * \brief Pessoa class implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 07/09/2019
 * 
 * \addtogroup pessoa
 * \{
 */

#include "pessoa.h"

using namespace std;

Pessoa::Pessoa()
{
}

Pessoa::Pessoa(string n)
    : Pessoa()
{
    this->set_nome(n);
}

Pessoa::Pessoa(string n, Birthdate bd)
    : Pessoa()
{
    this->set_nome(n);
    this->set_birthdate(bd);
}

Pessoa::Pessoa(string n, unsigned int year, unsigned int month, unsigned int day)
    : Pessoa()
{
    this->set_nome(n);
    this->set_birthdate(year, month, day);
}

Pessoa::~Pessoa()
{
}

void Pessoa::set_nome(string n)
{
    this->nome = n;
}

string Pessoa::get_nome()
{
    return this->nome;
}

void Pessoa::set_birthdate(Birthdate bd)
{
    this->birthdate = bd;
}

void Pessoa::set_birthdate(unsigned int year, unsigned int month, unsigned int day)
{
    this->birthdate.year     = year;
    this->birthdate.month    = month;
    this->birthdate.day      = day;
}

Birthdate Pessoa::get_birthdate()
{
    return this->birthdate;
}

//! \} End of pessoa group
