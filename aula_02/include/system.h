/*
 * system.h
 * 
 * Copyright (C) 2019, Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * This file is part of EEL510265-Aula-02.
 * 
 * EEL510265-Aula-02 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * EEL510265-Aula-02 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with EEL510265-Aula-02. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief System definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 22/08/2019
 * 
 * \defgroup system System
 * \{
 */

#ifndef SYSTEM_H_
#define SYSTEM_H_

#include "turma.h"
#include "menu.h"

/**
 * \brief System object.
 */
class System
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        System();

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~System();

        /**
         * \brief Loads data from the database.
         *
         * \todo Implement a database to save and load the data.
         *
         * \return None.
         */
        bool load();

        /**
         * \brief Saves the data to the database.
         *
         * \todo Implement a database to save and load the data.
         *
         * \return None.
         */
        bool save();

        /**
         * \brief Adds a new student to the class.
         *
         * \return None.
         */
        void add_new_student();

        /**
         * \brief Adds a new grade to the whole class.
         *
         * \return None.
         */
        void add_new_grade_to_all();

        /**
         * \brief Lists all the students.
         *
         * \return None.
         */
        void list_all();

        /**
         * \brief Runs the system.
         *
         * \return Error code uppon termination.
         */
        int run();

    private:

        Turma turma;        /**< Turma. */
        Menu main_menu;     /**< Main menu. */
};

#endif // SYSTEM_H_

//! \} End of system group
