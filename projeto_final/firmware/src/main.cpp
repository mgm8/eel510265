/*
 * main.cpp
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
 * \brief Main file.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.4.6
 * 
 * \date 20/10/2019
 * 
 * \defgroup main Main file
 * \{
 */

#include <os/scheduler.h>

#include <tasks/startup.h>
#include <tasks/time_control.h>
#include <tasks/save_log.h>

using namespace vmos;

int main(int argc, char *argv[])
{
    Scheduler vm_scheduler;

    vm_scheduler.add_task(new TaskStartup());
    vm_scheduler.add_task(new TaskTimeControl());
    vm_scheduler.add_task(new TaskSaveLog());

    vm_scheduler.run();

    return 0;
}

//! \} End of main group
