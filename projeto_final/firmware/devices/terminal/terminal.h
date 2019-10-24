/*
 * terminal.h
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
 * \brief Terminal device definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.9
 * 
 * \date 22/10/2019
 * 
 * \defgroup terminal Terminal
 * \ingroup devices
 * \{
 */

#ifndef TERMINAL_H_
#define TERMINAL_H_

#include <string>

#include <display.h>

/**
 * \brief Terminal device.
 */
class Terminal: public Display
{
    public:

        /**
         * \brief Display initialization.
         *
         * \return The status/error code.
         */
        int init();

        /**
         * \brief Writes ASCII characters to the display.
         *
         * \param[in] text is the text to write to the display.
         *
         * \return The status/error code.
         */
        int write(std::string text);

        /**
         * \brief Clears the terminal screen.
         *
         * \return The status/error code.
         */
        int clear();
};

#endif // TERMINAL_H_

//! \} End of terminal group
