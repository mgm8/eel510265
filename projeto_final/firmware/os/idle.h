/*
 * idle.h
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
 * \brief Idle task definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.3.7
 * 
 * \date 18/11/2019
 * 
 * \defgroup idle_task Idle Task
 * \ingroup os
 * \{
 */

#ifndef IDLE_H_
#define IDLE_H_

#include "task.h"

/**
 * \brief Vending Machine Operating System namespace.
 */
namespace vmos
{

    /**
     * \brief Idle task.
     */
    class Idle: public Task
    {
        public:
    
            /**
             * \brief Idle task initialization.
             *
             * \return None.
             */
            void init();

            /**
             * \brief Idle task implementation.
             *
             * \return None.
             */
            void run();
    };

} // namespace vmos

#endif // IDLE_H_

//! \} End of idle_task group
