/*
 * birthdate.h
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
 * \brief Birthdate class definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 08/09/2019
 * 
 * \defgroup birthdate Birthdate
 * \{
 */

#ifndef BIRTHDATE_H_
#define BIRTHDATE_H_

#include <iostream>

/**
 * \brief Birthdate of a person.
 */
class Birthdate
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Birthdate();

        /**
         * \brief Constructor (overloaded).
         *
         * \param[in] y is the birthdate year.
         * \param[in] m is the birthdate month.
         * \param[in] d is the birthdate day.
         *
         * \return None.
         */
        Birthdate(unsigned int y, unsigned int m, unsigned int d);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Birthdate();

        unsigned int day;           /**< Birthday. */
        unsigned int month;         /**< Birthmonth. */
        unsigned int year;          /**< Birthyear. */

        /**
         * \brief cout overload.
         *
         * \param[in] os is the ostream object.
         * \param[in] birthdate is the Birthdate object.
         *
         * \return An ostream object.
         */
        friend std::ostream& operator<<(std::ostream& os, const Birthdate& birthdate);
};

#endif // BIRTHDATE_H_

//! \} End of birthdate group
