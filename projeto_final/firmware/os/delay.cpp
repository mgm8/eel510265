/*
 * delay.cpp
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
 * \brief Delay implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.12
 * 
 * \date 18/11/2019
 * 
 * \addtogroup delay
 * \{
 */

#include <stdint.h>

#include "delay.h"

/**
 * \brief Vending Machine Operating System namespace.
 */
namespace vmos
{

    Delay::Delay(Timer *t)
    {
        this->timer = t;
    }
    
    Delay::~Delay()
    {
    }
    
    void Delay::wait_ms(unsigned int ms)
    {
        uint32_t start = this->timer->get_milliseconds();
    
        while(this->timer->get_milliseconds() < (start + ms))
        {
        }
    }
    
    void Delay::wait_s(unsigned int sec)
    {
        auto start = this->timer->get_seconds();
    
        while(this->timer->get_seconds() < (start + sec))
        {
        }
    }

} // namespace vmos

//! \} End of delay group
