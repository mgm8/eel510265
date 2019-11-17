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
 * \version 0.2.8
 * 
 * \date 17/11/2019
 * 
 * \defgroup task Task
 * \{
 */

#ifndef TASK_H_
#define TASK_H_

#include <string>

#include <stdint.h>

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
         * \param[in] task is a pointer to the task function or method.
         * \param[in] name is the name of the task as a string.
         * \param[in] period is the period of the task in milliseconds.
         * \param[in] priority is the priority of the task.
         *
         * \return None.
         */
        Task(void *task, std::string name, uint32_t period, uint8_t priority);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Task();

        /**
         * \brief Sets the pointer to the task function or method.
         *
         * \param[in] t is a pointer to the task function or method.
         *
         * \return None.
         */
        void set_task(void *t);

        /**
         * \brief Sets the name of the task.
         *
         * \param[in] n is a string with the name of the task.
         *
         * \return None.
         */
        void set_name(std::string n);

        /**
         * \brief Sets the period of the task.
         *
         * \param[in] p is the period of the task in milliseconds.
         *
         * \return None.
         */
        void set_period(uint32_t p);

        /**
         * \brief Sets the priority of the task.
         *
         * \param[in] p is the priority of the task.
         *
         * \return None.
         */
        void set_priority(uint8_t p);

        /**
         * \brief Gets the name of the task.
         *
         * \return The name of the task as a string.
         */
        std::string get_name();

        /**
         * \brief Gets the period of the task.
         *
         * \return The period of the task in milliseconds.
         */
        uint32_t get_period();

        /**
         * \brief Gets the priority of the task.
         *
         * \return The priority of the task.].
         */
        uint8_t get_priority();

    private:

        /**
         * \brief Pointer to the task function or method.
         */
        void *task;

        /**
         * \brief Task name.
         */
        std::string name;

        /**
         * \brief Task period in milliseconds.
         */
        uint32_t period_ms;

        /**
         * \brief Task priority.
         */
        uint8_t priority;
};

#endif // TASK_H_

//! \} End of task group
