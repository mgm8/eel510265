/*
 * wait_coins.h
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
 * \brief Wait coins task definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.4.11
 * 
 * \date 26/11/2019
 * 
 * \defgroup wait_coins Wait Coins
 * \ingroup tasks
 * \{
 */

#ifndef WAIT_COINS_H_
#define WAIT_COINS_H_

#include "os/task.h"

#define TASK_WAIT_COINS_NAME    "wait_coins"

/**
 * \brief Wait coins task.
 */
class TaskWaitCoins: public vmos::Task
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

#endif // WAIT_COINS_H_

//! \} End of wait_coins group
