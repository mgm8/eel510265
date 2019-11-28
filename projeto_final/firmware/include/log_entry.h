/*
 * log_entry.h
 * 
 * Copyright (C) 2019, Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * This file is part of eel510265-final-project.
 * 
 * eel510265-final-project is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * eel510265-final-project is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with eel510265-final-project. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief Log entry definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.5.5
 * 
 * \date 06/11/2019
 * 
 * \defgroup log_entry Log Entry
 * \{
 */

#ifndef LOG_ENTRY_H_
#define LOG_ENTRY_H_

#include "clock_calendar.h"
#include "drink.h"

/**
 * \brief Log entry.
 */
struct LogEntry
{
    /**
     * \brief Constructor.
     *
     * \return None.
     */
    LogEntry()
    {
    }

    /**
     * \brief Constructore (overloaded).
     *
     * \param[in] cc is a CloclCalendar object.
     * \param[in] d is a drink object.
     *
     * \return None.
     */
    LogEntry(ClockCalendar cc, Drink d)
    {
        datetime = cc;
        drink = d;
    }

    /**
     * \brief Date and time of the log entry.
     */
    ClockCalendar datetime;

    /**
     * \brief Drink of the log entry.
     */
    Drink drink;
};

#endif // LOG_ENTRY_H_

//! \} End of log_entry group
