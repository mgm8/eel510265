/*
 * timer.h
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
 * \brief Timer definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.3.10
 * 
 * \date 17/11/2019
 * 
 * \defgroup timer Timer
 * \{
 */

#ifndef TIMER_H_
#define TIMER_H_

#include "tick.h"
#include "task.h"
#include "list.hpp"

/**
 * \brief Vending Machine Operating System namespace.
 */
namespace vmos
{

class Task;

/**
 * \brief Timer class.
 */
class Timer
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Timer();

        /**
         * \brief Constructor (overloaded).
         *
         * \param[in] p is the tick period of the timer.
         *
         * \return None.
         */
        Timer(unsigned int p);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Timer();

        /**
         * \brief Starts the execution of the timer.
         *
         * \return None.
         */
        virtual void start();

        /**
         * \brief Sets the tick period of the timer.
         *
         * \param[in] p is the tick period in milliseconds.
         *
         * \return None.
         */
        void set_tick_period(unsigned int p);

        /**
         * \brief Sets the current value of the timer tick.
         *
         * \param[in] t is the new tick value.
         *
         * \return None.
         */
        void set_ticks(Tick t);

        /**
         * \brief Sets the task table pointer.
         *
         * \param[in] t is a pointer to task table list.
         *
         * \return None.
         */
        void set_tasks_table(List<Task *> *t);

        /**
         * \brief Gets the tick count value.
         *
         * \return The tick count valur.
         */
        Tick get_ticks();

        /**
         * \brief Gets the timer count value in milliseconds.
         *
         * \return The timer ticks in milliseconds.
         */
        Tick get_milliseconds();

        /**
         * \brief Gets the timer count value in seconds.
         *
         * \return The timer ticks in seconds.
         */
        Tick get_seconds();

        /**
         * \brief Converts a tick value to milliseconds.
         *
         * \param[in] t is the tick value to convert to milliseconds.
         *
         * \return The given tick value in milliseconds.
         */
        Tick ticks_to_milliseconds(Tick t);

        /**
         * \brief Converts a tick value to seconds.
         *
         * \param[in] t is the tick value to convert to seconds.
         *
         * \return The given tick value in seconds.
         */
        Tick ticks_to_seconds(Tick t);

    protected:

        /**
         * \brief Tick period in milliseconds.
         */
        unsigned int tick_period_ms;

        /**
         * \brief Ticks count.
         */
        Tick ticks;

        /**
         * \brief Tasks table pointer.
         */
        List<Task *> *tasks_table;

        /**
         * \brief Updates the tasks table (should be executed at every tick).
         *
         * \return None.
         */
        void update_tasks_table();

    private:

        /**
         * \brief Timer execution.
         *
         * \return None.
         */
        virtual void run();
};

}   // namespace vmos

#endif // TIMER_H_

//! \} End of timer group
