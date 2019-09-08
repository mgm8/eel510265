/*
 * pessoa.h
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
 * \brief Pessoa class definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 07/09/2019
 * 
 * \defgroup pessoa Pessoa
 * \{
 */

#ifndef PESSOA_H_
#define PESSOA_H_

#include <string>

/**
 * \brief Birthdate of a person.
 */
struct Birthdate
{
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

/**
 * \brief Pessoa object.
 */
class Pessoa
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Pessoa();

        /**
         * \brief Constructor with initialization (overloaded).
         *
         * \param[in] mat is the registration number of the person.
         * \param[in] n is the name of the person.
         *
         * \return None.
         */
        Pessoa(std::string mat, std::string n);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Pessoa();

        /**
         * \brief Gets the register number of the person.
         *
         * \return The register number as an string.
         */
        std::string get_matricula();

        /**
         * \brief Sets the person name.
         *
         * \param[in] n is the person's name.
         *
         * \return None.
         */
        void set_nome(std::string n);

        /**
         * \brief Gets the person's name.
         *
         * \return The name of the person as an string.
         */
        std::string get_nome();

        /**
         * \brief Sets the birthdate of the person.
         *
         * \param[in] bd is a Birthdate object.
         *
         * \return None.
         */
        void set_birthdate(Birthdate bd);

        /**
         * \brief Sets the birthdate of the person.
         *
         * \param[in] year is the year of birth.
         * \param[in] month is the month of birth.
         * \param[in] day is the day of birth.
         *
         * \return None.
         */
        void set_birthdate(unsigned int year, unsigned int month, unsigned int day);

        /**
         * \brief Gets the birthdate of the person.
         *
         * \return The birthdate of the person.
         */
        Birthdate get_birthdate();

    private:

        std::string matricula;          /**< Student register number. */
        std::string nome;               /**< Person name. */
        Birthdate birthdate;            /**< Person's birthdate. */

    protected:

        /**
         * \brief Sets the register number of the person.
         *
         * \param[in] mat is the register number of the person.
         *
         * \return None.
         */
        void set_matricula(std::string mat);
};

#endif // PESSOA_H_

//! \} End of pessoa group
