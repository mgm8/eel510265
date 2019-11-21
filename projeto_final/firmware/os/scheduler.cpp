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
 * \version 0.3.8
 * 
 * \date 17/11/2019
 * 
 * \addtogroup scheduler
 * \{
 */

#include <chrono>
#include <thread>

#include "scheduler.h"
#include "idle.h"
#include "timer_linux.h"

using namespace std;

namespace vmos
{

Scheduler::Scheduler()
{
    this->set_timer(new TimerLinux);

    this->add_task(new Idle());

    this->timer->set_tick_period(SYSTEM_TICK_PERIOD_MS);
    this->timer->set_tasks_table(&this->tasks);
}

Scheduler::Scheduler(List<Task *> t)
    : Scheduler()
{
    this->add_task(t);
}

Scheduler::~Scheduler()
{
}

void Scheduler::add_task(Task *t)
{
    this->tasks.push_back(t);
}

void Scheduler::add_task(List<Task *> t)
{
    for(unsigned int i=0; i<t.size(); i++)
    {
        this->tasks.push_back(t[i]);
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
        if (this->tasks[i]->get_name() == name)
        {
            this->tasks.erase(i);
        }
    }
}

void Scheduler::delete_task(const char *name)
{
    this->delete_task(string(name));
}

void Scheduler::set_timer(Timer *t)
{
    this->timer = t;
}

void Scheduler::run()
{
    for(unsigned int i=0; i<this->tasks.size(); i++)
    {
        this->tasks[i]->init();
    }

    this->timer->start();

    while(1)
    {
        this_thread::sleep_for(chrono::milliseconds(SYSTEM_TICK_PERIOD_MS));

        for(unsigned int i=0; i<this->tasks.size(); i++)
        {
            if (this->tasks[i]->is_enabled() and this->tasks[i]->is_ready())
            {
                this->tasks[i]->run();
                this->tasks[i]->set_ready(false);
            }
        }
    }
}

} // namespace vmos

//! \} End of scheduler group
