/*
 * coin_changer.h
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
 * \brief Coin changer definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.2
 * 
 * \date 22/10/2019
 * 
 * \defgroup coin_changer Coin Changer
 * \{
 */

#ifndef COIN_CHANGER_H_
#define COIN_CHANGER_H_

#include "coin.h"

#define COIN_CHANGER_STATUS_OK          0
#define COIN_CHANGER_STATUS_ERROR       1

#define COIN_CHANGER_NUM_COIN_TYPES     3

/**
 * \brief Coin changer device.
 */
class CoinChanger
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        CoinChanger();

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~CoinChanger();

        /**
         * \brief Coin input initialization.
         *
         * \note Pure virtual method.
         *
         * \return Error/status code.
         */
        virtual int init() = 0;

        /**
         * \brief Verifies if a new coin was inserted or not.
         *
         * \return TRUE/FALSE if a new coin is available or not.
         */
        virtual bool coin_available() = 0;

        /**
         * \brief Reads the last inserted coin.
         *
         * \return The monetary value of the inserted coin.
         */
        virtual float read() = 0;

        /**
         * \brief Gives change (return coins).
         *
         * \return Error/status code.
         */
        virtual int give_change(float value) = 0;

    protected:

        /**
         * \brief Valid coins.
         */
        Coin valid_coins[COIN_CHANGER_NUM_COIN_TYPES];
};

#endif // COIN_CHANGER_H_

//! \} End of coin_changer group
