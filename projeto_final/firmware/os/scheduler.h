/*
 * scheduler.h
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
 * \brief Scheduler definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.4.3
 * 
 * \date 17/11/2019
 * 
 * \defgroup scheduler Scheduler
 * \ingroup os
 * \{
 */

#ifndef SCHEDULER_H_
#define SCHEDULER_H_

#include <string>

#include "task.h"
#include "list.hpp"
#include "timer.h"

#define SYSTEM_TICK_PERIOD_MS       1   /**< Tick perios in milliseconds. */

/**
 * \brief Vending Machine Operating System namespace.
 */
namespace vmos
{

/**
 * \brief Scheduler class.
 */
class Scheduler
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Scheduler();

        /**
         * \brief Constructor (overloaded).
         *
         * \param[in] t is a new task to add to tasks list.
         *
         * \return None.
         */
        Scheduler(List<Task *> t);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Scheduler();

        /**
         * \brief Adds a task to the tasks list.
         *
         * \param[in] t is a new task to add to tasks list.
         *
         * \return None.
         */
        void add_task(Task *t);

        /**
         * \brief Adds a new task to the tasks list (overloaded).
         *
         * \param[in] t is a new task to add to tasks list.
         *
         * \return None.
         */
        void add_task(List<Task *> t);

        /**
         * \brief Deletes a task from the tasks list by its index.
         *
         * \param[in] index is the index position of the task in the task list.
         *
         * \return None.
         */
        void delete_task(unsigned int index);

        /**
         * \brief Deletes a task from the task list by its name (overloaded).
         *
         * \param[in] name is the name of the teask.
         *
         * \return None.
         */
        void delete_task(std::string name);

        /**
         * \brief Deletes a task from the task list by its name (overloaded).
         *
         * \param[in] name is the name of the teask.
         *
         * \return None.
         */
        void delete_task(const char *name);

        /**
         * \brief Sets the scheduler timer.
         *
         * \param[in] t is a pointer to a vmos::Timer object.
         *
         * \return None.
         */
        void set_timer(Timer *t);

        /**
         * \brief Execution of the scheduler.
         *
         * \return None.
         */
        void run();

    private:

        /**
         * \brief Tasks list.
         */
        List<Task *> tasks;

        /**
         * \brief System tick timer.
         */
        Timer *timer;

        /**
         * \brief Sort the tasks table by the priority of the tasks.
         *
         * \return None.
         */
        void sort_tasks_by_priority();
};

} // namespace vmos

#endif // SCHEDULER_H_

//! \} End of scheduler group
