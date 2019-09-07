/*
 * clock.h
 * 
 * Copyright (C) 2019, Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * This file is part of EEL510265-Aula-03.
 * 
 * EEL510265-Aula-03 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * EEL510265-Aula-03 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with EEL510265-Aula-03. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief Clock class definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 01/09/2019
 * 
 * \defgroup clock Clock
 * \{
 */

#ifndef CLOCK_H_
#define CLOCK_H_

#include <iostream>
#include <string>

/**
 * \brief Clock class.
 */
class Clock
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Clock();

        /**
         * \brief Constructor (overloaded).
         *
         * \param[in] h is the initial hour.
         * \param[in] m is the initial minute.
         * \param[in] s is the initial second.
         *
         * \return None.
         */
        Clock(unsigned int h, unsigned int m, unsigned int s);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Clock();

        /**
         * \brief Increments the time by n seconds.
         *
         * \param[in] val is the number of seconds to increment.
         *
         * \return None.
         */
        void increment(unsigned int val=1);

        /**
         * \brief Get the time.
         *
         * \return The time as an string.
         */
        std::string get_time();

        /**
         * \brief cout overload.
         *
         * \param[in] os is the ostream object.
         * \param[in] clock is the Clock object.
         *
         * \return An ostream object.
         */
        friend std::ostream& operator<<(std::ostream& os, const Clock& clock);

        /**
         * \brief Second.
         */
        unsigned int second;

        /**
         * \brief Minute.
         */
        unsigned int minute;

        /**
         * \brief Hour.
         */
        unsigned int hour;
};

#endif // CLOCK_H_

//! \} End of clock group
