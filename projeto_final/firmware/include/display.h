/*
 * display.h
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
 * \brief Display device definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.4
 * 
 * \date 22/10/2019
 * 
 * \defgroup display Display
 * \{
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <string>

/**
 * \brief Display device.
 */
class Display
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Display() { };

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Display() { };

        /**
         * \brief Display initialization.
         *
         * \note Pure virtual method.
         *
         * \return The status/error code.
         */
        virtual int init() = 0;

        /**
         * \brief Writes ASCII characters to the display.
         *
         * \note Pure virtual method.
         *
         * \param[in] text is the text to write to the display.
         *
         * \return The status/error code.
         */
        virtual int write(std::string text) = 0;

        /**
         * \brief Clears the display.
         *
         * \note Pure virtual method.
         *
         * \return The status/error code.
         */
        virtual int clear() = 0;
};

#endif // DISPLAY_H_

//! \} End of display group
