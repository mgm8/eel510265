/*
 * coid.h
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
 * \brief Coin definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.1
 * 
 * \date 20/10/2019
 * 
 * \defgroup coin Coin
 * \{
 */

#ifndef COIN_H_
#define COIN_H_

#define COIN_DEFAULT_VALUE          0.0     /**< Coin default monetary value. */

/**
 * \brief Coin object.
 */
class Coin
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Coin();

        /**
         * \brief Constructor (overloaded).
         *
         * \param[in] val is the monetary value of the coin.
         *
         * \return None.
         */
        Coin(float val);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Coin();

        /**
         * \brief Sets the monetary value of the coin.
         *
         * \param[in] val is the value number of the coin.
         *
         * \return None.
         */
        void set_value(float val);

        /**
         * \brief Gets the monetary value of the coin.
         *
         * \return The monetary value of the coin.
         */
        float get_value();

    private:

        /**
         * \brief Monetary value.
         */
        float value;
};

#endif // COIN_H_

//! \} End of coin group
