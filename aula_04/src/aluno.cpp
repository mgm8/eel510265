/*
 * aluno.cpp
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
 * \brief Aluno class implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 01/09/2019
 * 
 * \addtogroup aluno
 * \{
 */

#include <numeric>

#include "aluno.h"

using namespace std;

Aluno::Aluno()
    : Pessoa::Pessoa()
{
    this->set_max_notas(ALUNO_GRADES_QUANTITY);
    this->notas.resize(ALUNO_GRADES_QUANTITY, ALUNO_DEFAULT_GRADE);
}

Aluno::Aluno(string mat, string n)
    : Aluno()
{
    this->set_matricula(mat);
    this->set_nome(n);
}

Aluno::Aluno(string mat, string n, Birthdate bd)
    : Aluno()
{
    this->set_matricula(mat);
    this->set_nome(n);
    this->set_birthdate(bd);
}

string Aluno::get_matricula()
{
    return this->matricula;
}

void Aluno::set_max_notas(unsigned int max)
{
    this->notas.resize(max, ALUNO_DEFAULT_GRADE);
}

unsigned int Aluno::get_max_notas()
{
    return this->notas.size();
}

void Aluno::set_nota(unsigned int i, float n)
{
    if (i < this->notas.size())
    {
        this->notas[i] = n;
    }
}

float Aluno::get_nota(unsigned int i)
{
    return this->notas[i];
}

float Aluno::calc_media()
{
    return accumulate(this->notas.begin(), this->notas.end(), (double)0)/this->notas.size();
}

void Aluno::set_matricula(string mat)
{
    this->matricula = mat;
}

//! \} End of aluno group
