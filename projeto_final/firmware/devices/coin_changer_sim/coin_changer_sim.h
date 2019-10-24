/*
 * coin_changer_sim.h
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
 * \brief Coin changer simulator definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.11
 * 
 * \date 23/10/2019
 * 
 * \defgroup coin_changer_sim Coin Changer Simulation
 * \ingorup coin_changer
 * \{
 */

#ifndef COIN_CHANGER_SIM_H_
#define COIN_CHANGER_SIM_H_

#include <coin_changer.h>
#include <coin.h>

/**
 * \brief Coin changer device.
 */
class CoinChangerSim: public CoinChanger
{
    public:

        /**
         * \brief Coin input initialization.
         *
         * \return Error/status code.
         */
        int init();

        /**
         * \brief Verifies if a new coin was inserted or not.
         *
         * \return TRUE/FALSE if a new coin is available or not.
         */
        bool coin_available();

        /**
         * \brief Reads the last inserted coin.
         *
         * \return The monetary value of the inserted coin.
         */
        float read();

        /**
         * \brief Gives change (return coins).
         *
         * \return Error/status code.
         */
        int give_change(float value);

    private:

        /**
         * \brief Last inserted coin.
         */
        Coin last_inserted_coin;
};

#endif // COIN_CHANGER_SIM_H_

//! \} End of coin_changer_sim group
