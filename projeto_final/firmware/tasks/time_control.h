/*
 * time_control.h
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
 * \brief Time control task definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.4.0
 * 
 * \date 24/11/2019
 * 
 * \defgroup time_contorl Time Control
 * \ingroup tasks
 * \{
 */

#ifndef TIME_CONTROL_H_
#define TIME_CONTROL_H_

#include "clock_calendar.h"
#include "os/task.h"

extern ClockCalendar datetime;

/**
 * \brief Time control task.
 */
class TaskTimeControl: public vmos::Task
{
    public:

        /**
         * \brief Task initialization.
         *
         * \return None.
         */
        void init();

        /**
         * \brief Time control task implementation.
         *
         * This taks increments the system datetime at every second.
         *
         * \return None.
         */
        void run();
};

#endif // TIME_CONTROL_H_

//! \} End of time_control group
