/*
 * startup.h
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
 * \brief Startup task definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.4.5
 * 
 * \date 21/11/2019
 * 
 * \defgroup startup Startup
 * \ingroup tasks
 * \{
 */

#ifndef STARTUP_H_
#define STARTUP_H_

#include "os/task.h"

/**
 * \brief Startup task.
 */
class TaskStartup: public vmos::Task
{
    public:

        /**
         * \brief Task initialization.
         *
         * \return None.
         */
        void init();

        /**
         * \brief Task implementation.
         *
         * \return None.
         */
        void run();
};

#endif // STARTUP_H_

//! \} End of startup group
