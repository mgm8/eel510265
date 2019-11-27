/*
 * coin_changer_sim.cpp
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
 * \brief Coin changer simulation implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.5.1
 * 
 * \date 23/10/2019
 * 
 * \addtogroup coin_changer_sim
 * \{
 */

#include <iostream>

#include <sys/select.h>
#include <unistd.h>

#include "coin_changer_sim.h"

using namespace std;

int CoinChangerSim::init()
{
    this->last_inserted_coin = Coin(0);

    return COIN_CHANGER_STATUS_OK;
}

bool CoinChangerSim::coin_available()
{
    cout << "Coin value to insert: " << endl;

    // Below cin operation should be executed within stipulated period of time
    fd_set read_set;
    FD_ZERO(&read_set);
    FD_SET(STDIN_FILENO, &read_set);
    struct timeval tv = {2, 0};     // 2 seconds, 0 microseconds

    if (select(STDIN_FILENO + 1, &read_set, NULL, NULL, &tv) < 0)
    {
        perror("Error on keyboard!");
    }

    float value;

    if (FD_ISSET(STDIN_FILENO, &read_set))
    {
        cin >> value;
    }

    cout << endl;

    this->last_inserted_coin = Coin(value);

    return value > 0 ? true : false;
}

float CoinChangerSim::read()
{
    bool is_valid = false;

    for(unsigned int i=0; i<COIN_CHANGER_NUM_COIN_TYPES; i++)
    {
        if (this->last_inserted_coin == this->valid_coins[i])
        {
            is_valid = true;
        }
    }

    if (is_valid)
    {
        return this->last_inserted_coin.get_value();
    }
    else
    {
        cout << "Invalid coin!" << endl;

        this->give_change(this->last_inserted_coin.get_value());

        return 0;
    }
}

int CoinChangerSim::give_change(float value)
{
    cout << "Returning R$" << to_string(value) << "..." << endl;

    return COIN_CHANGER_STATUS_OK;
}

//! \} End of coin_changer_sim group
