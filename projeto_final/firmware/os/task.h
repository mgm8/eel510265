/*
 * task.h
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
 * \brief Task definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.3.10
 * 
 * \date 17/11/2019
 * 
 * \defgroup task Task
 * \ingroup os
 * \{
 */

#ifndef TASK_H_
#define TASK_H_

#include <string>

#include "tick.h"
#include "timer.h"

#define TASK_DEFAULT_PERIOD_TICKS       100         /**< Default period in ticks. */
#define TASK_DEFAULT_PRIORITY           (Tick)0     /**< Default priority. */

/**
 * \brief Vending Machine Operating System namespace.
 */
namespace vmos
{

class Timer;

/**
 * \brief Task object.
 */
class Task
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Task();

        /**
         * \brief Constructor (overloaded).
         *
         * \param[in] name is the name of the task as a string.
         * \param[in] period is the period of the task in ticks.
         * \param[in] priority is the priority of the task.
         *
         * \return None.
         */
        Task(std::string name, int period, int priority);

        /**
         * \brief Constructor (overloaded).
         *
         * \param[in] name is the name of the task as a string.
         * \param[in] period is the period of the task in ticks.
         * \param[in] priority is the priority of the task.
         *
         * \return None.
         */
        Task(const char *name, int period, int priority);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Task();

        /**
         * \brief Initializes the task (virtual).
         *
         * \return None.
         */
        virtual void init() { };

        /**
         * \brief Sets the name of the task.
         *
         * \param[in] n is a string with the name of the task.
         *
         * \return None.
         */
        void set_name(std::string n);

        /**
         * \brief Sets the name of the task.
         *
         * \param[in] n is a string with the name of the task.
         *
         * \return None.
         */
        void set_name(const char *n);

        /**
         * \brief Sets the period of the task.
         *
         * \param[in] p is the period of the task in ticks.
         *
         * \return None.
         */
        void set_period(Tick p);

        /**
         * \brief Sets the priority of the task.
         *
         * \param[in] p is the priority of the task.
         *
         * \return None.
         */
        void set_priority(unsigned int p);

        /**
         * \brief Gets the name of the task.
         *
         * \return The name of the task as a string.
         */
        std::string get_name();

        /**
         * \brief Gets the period of the task.
         *
         * \return The period of the task in ticks.
         */
        Tick get_period();

        /**
         * \brief Gets the priority of the task.
         *
         * \return The priority of the task.].
         */
        unsigned int get_priority();

        /**
         * \brief Verifies if the task is ready to execute or not.
         *
         * \return TRUE/FALSE if the task is ready or not.
         */
        bool is_ready();

        /**
         * \brief Sets the "ready" state of the task.
         *
         * \param[in] r is the "ready" state value (TRUE/FALSE).
         *
         * \return None.
         */
        void set_ready(bool r);

        /**
         * \brief Verifies if the task is enabled or not.
         *
         * \return TRUE/FALSE if the task is enaled or not.
         */
        bool is_enabled();

        /**
         * \brief Implementation of the task.
         *
         * \return None.
         */
        virtual void run() { };

        /**
         * \brief Suspend the execution of the task.
         *
         * \return None.
         */
        void suspend();

        /**
         * \brief Resume the execution of the task.
         *
         * \return None.
         */
        void resume();

        /**
         * \brief Task delay counter.
         */
        Tick delay;

        /**
         * \brief Pointer to the system timer.
         */
        Timer *timer;

    private:

        /**
         * \brief Task name.
         */
        std::string name;

        /**
         * \brief Task period in ticks.
         */
        Tick period;

        /**
         * \brief Task priority.
         */
        unsigned int priority;

        /**
         * \brief Is ready flag.
         */
        bool ready;

        /**
         * \brief Is enabled flag.
         */
        bool enabled;
};

}   // namespace vmos

#endif // TASK_H_

//! \} End of task group
