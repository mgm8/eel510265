/*
 * menu.h
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
 * \brief Main menu definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 01/09/2019
 * 
 * \defgroup menu Menu
 * \{
 */

#ifndef MENU_H_
#define MENU_H_

/**
 * \brief Main menu options.
 */
enum main_menu_options_e
{
    MENU_OPTION_LOGIN=1,                    /**< Login. */
    MENU_OPTION_LOGOUT,                     /**< Logout. */
    MENU_OPTION_ADD_NEW_STUDENT,            /**< Adds a new student. */
    MENU_OPTION_DEL_STUDENT,                /**< Deletes an student. */
    MENU_OPTION_EDIT_STUDENT,               /**< Edit student data. */
    MENU_OPTION_VIEW_STUDENT,               /**< View student data. */
    MENU_OPTION_LIST_ALL_STUDENTS,          /**< List all students and grades. */
    MENU_OPTION_ADD_NEW_PROFESSOR,          /**< Adds a new professor. */
    MENU_OPTION_DEL_PROFESSOR,              /**< Deletes a professor. */
    MENU_OPTION_EDIT_PROFESSOR,             /**< Edit professor data. */
    MENU_OPTION_VIEW_PROFESSOR,             /**< View professor data. */
    MENU_OPTION_LIST_ALL_PROFESSORS,        /**< List all professors. */
    MENU_OPTION_ADD_NEW_GRADE,              /**< Adds a new grade to the whole class. */
    MENU_OPTION_EXIT                        /**< Exits the program. */
};

/**
 * \brief Main menu.
 */
class Menu
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Menu();

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Menu();

        /**
         * \brief Prints the main menu.
         *
         * \return None.
         */
        void print_main_menu();

        /**
         * \brief Waits and gets the selected option by the user.
         *
         * \return The selected option by the user.
         */
        unsigned int get_option();
};

#endif // MENU_H_

//! \} End of menu group
