/*
 * calendar.h
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
 * \brief Calendar class definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.7
 * 
 * \date 01/09/2019
 * 
 * \defgroup calendar Calendar
 * \{
 */

#ifndef CALENDAR_H_
#define CALENDAR_H_

#include <iostream>
#include <string>

/**
 * \brief Months.
 */
enum months_e
{
    MONTH_JANUARY=1,        /**< January. */
    MONTH_FEBRUARY,         /**< February. */
    MONTH_MARCH,            /**< March. */
    MONTH_APRIL,            /**< April. */
    MONTH_MAY,              /**< May. */
    MONTH_JUNE,             /**< June. */
    MONTH_JULY,             /**< July. */
    MONTH_AUGUST,           /**< August. */
    MONTH_SEPTEMBER,        /**< September. */
    MONTH_OCTOBER,          /**< October. */
    MONTH_NOVEMBER,         /**< November. */
    MONTH_DEZEMBER          /**< Dezember. */
};

/**
 * \brief Calendar class.
 */
class Calendar
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Calendar();

        /**
         * \brief Constructor (overloaded).
         *
         * \param[in] y is the initial year.
         * \param[in] m is the initial month.
         * \param[in] d is the initial day.
         *
         * \return None.
         */
        Calendar(unsigned int y, unsigned int m, unsigned int d);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Calendar();

        /**
         * \brief Increment the calendar by n days.
         *
         * \param[in] n is the number of days to increment.
         *
         * \return None.
         */
        void increment(unsigned int n=1);

        /**
         * \brief .
         *
         * \return .
         */
        std::string get_date();

        /**
         * \brief cout overload.
         *
         * \param[in] os is the ostream object.
         * \param[in] calendar is the Calendar object.
         *
         * \return An ostream object.
         */
        friend std::ostream& operator<<(std::ostream& os, const Calendar& calendar);

        /**
         * \brief Second.
         */
        unsigned int day;

        /**
         * \brief Minute.
         */
        unsigned int month;

        /**
         * \brief Year.
         */
        unsigned int year;
};

#endif // CALENDAR_H_

//! \} End of calendar group
