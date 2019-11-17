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
 * \version 0.2.8
 * 
 * \date 17/11/2019
 * 
 * \addtogroup task
 * \{
 */

#include "task.h"

using namespace std;

Task::Task()
{
}

Task::Task(void *task, std::string name, uint32_t period, uint8_t priority)
    : Task()
{
    this->set_task(task);
    this->set_name(name);
    this->set_period(period);
    this->set_priority(priority);
}

Task::~Task()
{
}

void Task::set_task(void *t)
{
    this->task = t;
}

void Task::set_name(string n)
{
    this->name = n;
}

void Task::set_period(uint32_t p)
{
    this->period_ms = p;
}

void Task::set_priority(uint8_t p)
{
    this->priority = p;
}

string Task::get_name()
{
    return this->name;
}

uint32_t Task::get_period()
{
    return this->period_ms;
}

uint8_t Task::get_priority()
{
    return this->priority;
}

//! \} End of task group
