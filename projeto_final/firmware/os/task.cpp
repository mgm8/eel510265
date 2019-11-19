/*
 * task.cpp
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
 * \brief Task implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.3.2
 * 
 * \date 17/11/2019
 * 
 * \addtogroup task
 * \{
 */

#include "task.h"

using namespace std;

namespace vmos
{

Task::Task()
{
    this->ready = false;
}

Task::Task(std::string name, Tick period, unsigned int priority)
    : Task()
{
    this->set_name(name);
    this->set_period(period);
    this->set_priority(priority);

    this->ready = true;
    this->resume();
}

Task::~Task()
{
}

void Task::set_name(string n)
{
    this->name = n;
}

void Task::set_period(Tick p)
{
    this->period = p;
    this->delay = p;
}

void Task::set_priority(unsigned int p)
{
    this->priority = p;
}

string Task::get_name()
{
    return this->name;
}

Tick Task::get_period()
{
    return this->period;
}

unsigned int Task::get_priority()
{
    return this->priority;
}

bool Task::is_ready()
{
    return this->ready;
}

bool Task::is_enabled()
{
    return this->enabled;
}

void Task::suspend()
{
    this->enabled = false;
}

void Task::resume()
{
    this->enabled = true;
}

} // namespace vmos

//! \} End of task group
