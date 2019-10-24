/*
 * delay.h
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
 * \brief Generic delay definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.10
 * 
 * \date 23/10/2019
 * 
 * \defgroup delay Delay
 * \{
 */

#ifndef DELAY_H_
#define DELAY_H_

/**
 * \brief Delay class.
 */
class Delay
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Delay() { };

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Delay() { };

        /**
         * \brief Milliseconds delay.
         *
         * \param[in] ms is the number of milliseconds do delay.
         *
         * \return None.
         */
        virtual void delay_ms(unsigned int ms) = 0;

        /**
         * \brief Seconds delay.
         *
         * \param[in] sec is the number of seconds to delay.
         *
         * \return None.
         */
        virtual void delay_s(unsigned int sec) = 0;
};

#endif // DELAY_H_

//! \} End of delay group
