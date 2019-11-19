/*
 * scheduler.cpp
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
 * \brief Scheduler implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.3.4
 * 
 * \date 17/11/2019
 * 
 * \addtogroup scheduler
 * \{
 */

#include "scheduler.h"
#include "idle.h"

using namespace std;

namespace vmos
{

Scheduler::Scheduler()
{
    this->add_task(Idle());
}

Scheduler::Scheduler(List<Task> t)
    : Scheduler()
{
    this->tasks = t;
}

Scheduler::~Scheduler()
{
}

void Scheduler::add_task(Task t)
{
    this->tasks.push_back(t);
}

void Scheduler::add_task(List<Task> t)
{
    for(unsigned int i=0; i<t.size(); i++)
    {
        this->tasks.push_back(t.at(i));
    }
}

void Scheduler::delete_task(unsigned int index)
{
    this->tasks.erase(index);
}

void Scheduler::delete_task(string name)
{
    for(unsigned int i=0; i<this->tasks.size(); i++)
    {
        if (this->tasks.at(i).get_name() == name)
        {
            this->tasks.erase(i);
        }
    }
}

void Scheduler::run()
{
    while(1)
    {
        for(unsigned int i=0; i<this->tasks.size(); i++)
        {
            if (this->tasks.at(i).is_enabled())
            {
                this->tasks.at(i).run();
            }
        }
    }
}

} // namespace vmos

//! \} End of scheduler group
