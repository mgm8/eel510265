/*
 * delay_linux.cpp
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
 * \brief Linux delay implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.10
 * 
 * \date 23/10/2019
 * 
 * \addtogroup delay_linux
 * \{
 */

#include <thread>
#include <chrono>

#include "delay_linux.h"

using namespace std;

void DelayLinux::delay_ms(unsigned int ms)
{
    this_thread::sleep_for(chrono::milliseconds(ms));
}

void DelayLinux::delay_s(unsigned int sec)
{
    this_thread::sleep_for(chrono::seconds(sec));
}

//! \} End of delay_linux group