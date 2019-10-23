/*
 * interface.h
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
 * \brief User interface definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.6
 * 
 * \date 22/10/2019
 * 
 * \defgroup interface Interface
 * \{
 */

#ifndef INTERFACE_H_
#define INTERFACE_H_

/**
 * \brief User interface.
 */
class Interface
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Interface() { };

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Interface() { };

        /**
         * \brief Reads the interface.
         *
         * \return The read value (-1 on error).
         */
        virtual int read() = 0;
};

#endif // INTERFACE_H_

//! \} End of interface group
