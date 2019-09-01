/*
 * turma.h
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
 * \brief Turma class definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 01/09/2019
 * 
 * \defgroup turma Turma
 * \{
 */

#ifndef TURMA_H_
#define TURMA_H_

#include <vector>

#include "aluno.h"

/**
 * \brief Turma object.
 */
class Turma : public std::vector<Aluno>
{
    public:

        /**
         * \brief Gets the average of a given grade of the whole class.
         *
         * \param[in] i is the grade index to the get the average.
         *
         * \return The class average of a given grade.
         */
        float get_average(unsigned int i);

        /**
         * \brief Gets the final average of the whole class.
         *
         * \return The class average of the final grade.
         */
        float get_final_average();
};

#endif // TURMA_H_

//! \} End of turma group
