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

Pessoa::Pessoa(string mat, string n)
    : Pessoa()
{
    this->set_matricula(mat);
    this->set_nome(n);
}

Pessoa::~Pessoa()
{
}

string Pessoa::get_matricula()
{
    return this->matricula;
}

void Pessoa::set_nome(string n)
{
    this->nome = n;
}

string Pessoa::get_nome()
{
    return this->nome;
}

void Pessoa::set_matricula(string mat)
{
    this->matricula = mat;
}

//! \} End of pessoa group
