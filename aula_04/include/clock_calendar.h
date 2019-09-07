/*
 * clock_calendar.h
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
 * \brief ClockCalendar class definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 01/09/2019
 * 
 * \defgroup clock_calendar ClockCalendar
 * \{
 */

#ifndef CLOCK_CALENDAR_H_
#define CLOCK_CALENDAR_H_

#include <iostream>
#include <string>

#include "clock.h"
#include "calendar.h"

/**
 * \brief ClockCalendar class.
 */
class ClockCalendar: public Clock, public Calendar
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        ClockCalendar();

        /**
         * \brief Constructor (overloaded).
         *
         * \param[in] y is the initial year.
         * \param[in] mon is the initial month.
         * \param[in] d is the initial day.
         * \param[in] h is the initial hour.
         * \param[in] m is the initial minute.
         * \param[in] s is the initial second.
         *
         * \return None.
         */
        ClockCalendar(unsigned int y, unsigned int mon, unsigned int d, unsigned int h, unsigned int m, unsigned int s);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~ClockCalendar();

        /**
         * \brief Increments the datetime by 1 second.
         *
         * \return None.
         */
        void increment();

        /**
         * \brief Get the time.
         *
         * \return The time as an string.
         */
        std::string get_datetime();

        /**
         * \brief cout overload.
         *
         * \param[in] os is the ostream object.
         * \param[in] cc is the ClockCalendar object.
         *
         * \return An ostream object.
         */
        friend std::ostream& operator<<(std::ostream& os, const ClockCalendar& cc);
};

#endif // CLOCK_CALENDAR_H_

//! \} End of clock_calendar group
