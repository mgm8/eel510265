/*
 * timer_linux.h
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
 * \brief Timer (Linux) definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.10
 * 
 * \date 17/11/2019
 * 
 * \defgroup timer_linux Linux
 * \ingroup timer
 * \{
 */

#ifndef TIMER_LINUX_H_
#define TIMER_LINUX_H_

#include "timer.h"

/**
 * \brief Timer (Linux) class.
 */
class TimerLinux: public Timer
{
    public:

        /**
         * \brief Starts the execution of the timer.
         *
         * \return None.
         */
        void start();

    private:

        /**
         * \brief Timer execution.
         *
         * \return None.
         */
        void run();        
};

#endif // TIMER_LINUX_H_

//! \} End of timer_linux group
