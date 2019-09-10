/*
 * professor.h
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
 * along with EEL510265-Aula-04. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief Professor class definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 07/09/2019
 * 
 * \defgroup professor Professor
 * \{
 */

#ifndef PROFESSOR_H_
#define PROFESSOR_H_

#include "pessoa.h"

/**
 * \brief Professor object.
 */
class Professor: public Pessoa
{
    public:

        /**
         * \brief Constructor.
         *
         * \param[in] n is the name of the person.
         * \param[in] bd is the person's birthdate.
         *
         * \return None.
         */
        Professor(std::string n, Birthdate bd);
};

#endif // PROFESSOR_H_

//! \} End of professor group
