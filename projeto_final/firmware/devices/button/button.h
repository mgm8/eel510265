/*
 * button.h
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
 * \brief Button definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.3
 * 
 * \date 21/10/2019
 * 
 * \defgroup button Button
 * \{
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#include <string>

/**
 * \brief Button device.
 */
class Button
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Button();

        /**
         * \brief Constructor (overloaed).
         *
         * \param[in] label is the label of the button.
         *
         * \return None.
         */
        Button(std::string label);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Button();

        /**
         * \brief Verifies if the button state.
         *
         * \return TRUE/FALSE if the button is pressed or not.
         */
        bool is_pressed();

        /**
         * \brief Sets the label of the button.
         *
         * \param[in] label is the new button label.
         *
         * \return None.
         */
        void set_label(std::string label);

        /**
         * \brief Gets the label of the button.
         *
         * \return The name of the button as an string.
         */
        std::string get_label();

    private:

        /**
         * \brief Button label.
         */
        std::string label;
};

#endif // BUTTON_H_

//! \} End of button group
