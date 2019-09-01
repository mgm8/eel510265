/*
 * aluno.h
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
 * \brief Aluno class definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 22/08/2019
 * 
 * \defgroup aluno Aluno
 * \{
 */

#ifndef ALUNO_H_
#define ALUNO_H_

#include <string>
#include <vector>

/**
 * \brief The maximum number of grades.
 */
#define ALUNO_GRADES_QUANTITY       2

/**
 * \brief Default grade of the students.
 */
#define ALUNO_DEFAULT_GRADE         0.0

/**
 * \brief Aluno object.
 */
class Aluno
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Aluno();

        /**
         * \brief Constructor with initialization (overloaded).
         *
         * \return None.
         */
        Aluno(std::string mat, std::string n);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Aluno();

        /**
         * \brief Sets the maximum number of grades.
         *
         * \param[in] max is the maximum quantity of grades.
         *
         * \return None.
         */
        void set_max_notas(unsigned int max);

        /**
         * \brief Gets the maximum number of grades.
         *
         * \return The maximum number of grades.
         */
        unsigned int get_max_notas();

        /**
         * \brief Sets the register number of the student.
         *
         * \param[in] mat is the register number of the student.
         *
         * \return None.
         */
        void set_matricula(std::string mat);

        /**
         * \brief Gets the register number of the student.
         *
         * \return The register number as an string.
         */
        std::string get_matricula();

        /**
         * \brief Sets the student name.
         *
         * \param[in] n is the student name.
         *
         * \return None.
         */
        void set_nome(std::string n);

        /**
         * \brief Gets the students name.
         *
         * \return The name of the student as an string.
         */
        std::string get_nome();

        /**
         * \brief .
         *
         * \param[in]
         *
         * \return None.
         */
        void set_nota(unsigned int i, float n);

        /**
         * \brief .
         *
         * \return .
         */
        float get_nota(unsigned int i);

        /**
         * \brief Computes the average grade.
         *
         * \return The average of the student's grades.
         */
        float calc_media();

    private:

        std::string matricula;          /**< Student register number. */
        std::string nome;               /**< Student name. */
        std::vector<float> notas;       /**< Grades. */
};

#endif // ALUNO_H_

//! \} End of aluno group
