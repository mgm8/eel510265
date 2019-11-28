/*
 * save_log.cpp
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
 * \brief Log saving task implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.5.4
 * 
 * \date 25/11/2019
 * 
 * \addtogroup save_log
 * \{
 */

#include <string>
#include <fstream>

#include <vending_machine.h>

#include "save_log.h"

using namespace std;
using namespace vmos;

void save_log(string row)
{
    ofstream log_file;

    log_file.open(VENDING_MACHINE_LOG_FILE, ios::app);

    log_file << row << endl;

    log_file.close();
}

void TaskSaveLog::init()
{
    this->set_name("save_log");

    this->set_period(5000);  // 5000 ticks = 5000 ms

    this->set_priority(1);
}

void TaskSaveLog::run()
{
    if (vending_machine.system_log.size() > 0)      // Verifies if the log queue is not empty
    {
        for(unsigned int i=0; i<vending_machine.system_log.size(); i++)
        {
            // Reads the first node of the queue
            LogEntry entry = vending_machine.system_log.dequeue();

            // CSV line
            string log_row;

            log_row = entry.datetime.get_datetime();
            log_row += ",";
            log_row += entry.drink.get_name();

            save_log(log_row);
        }
    }
}

//! \} End of save_log group
