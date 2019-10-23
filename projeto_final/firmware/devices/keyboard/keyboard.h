/*
 * keyboard.h
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
 * \brief Keyboard interface definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.7
 * 
 * \date 22/10/2019
 * 
 * \defgroup keyboar Keyboard
 * \ingroup devices
 * \{
 */

#ifndef KEYBOARD_H_
#define KEYBOARD_H_

#include <interface.h>

#define KEYBOARD_ERROR          -1

/**
 * \brief Keyboard buttons.
 */
enum keyboard_options_e
{
    KEYBOARD_BUTTON_MEETS=1,    /**< MEETS button. */
    KEYBOARD_BUTTON_ETIRPS      /**< ETIRPS button. */
};

/**
 * \brief Keyboard interface.
 */
class Keyboard: public Interface
{
    public:

        /**
         * \brief Reads the keyboard interface.
         *
         * \return The read value (-1 on error).
         */
        int read();
};

#endif // KEYBOARD_H_

//! \} End of keyboard group
