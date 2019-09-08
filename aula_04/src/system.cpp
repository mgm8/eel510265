/*
 * system.cpp
 * 
 * Copyright (C) 2019, Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * This file is part of EEL510265-Aula-02.
 * 
 * EEL510265-Aula-02 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * EEL510265-Aula-02 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with EEL510265-Aula-02. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief System implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 22/08/2019
 * 
 * \addtogroup system
 * \{
 */

#include <iostream>
#include <string>

#include "system.h"

using namespace std;

System::System()
{
}

System::~System()
{
}

bool System::load()
{
    return true;
}

bool System::save()
{
    return true;
}

void System::add_new_student()
{
    cout << endl;
    cout << "Name: ";
    string nome;
    cin >> nome;

    cout << "Birthyear (YYYY): ";
    Birthdate birthdate;
    cin >> birthdate.year;
    cout << endl;
    cout << "Birthmonth (1 to 12): ";
    cin >> birthdate.month;
    cout << endl;
    cout << "Birthday: ";
    cin >> birthdate.day;
    cout << endl;

    cout << "Registration number: ";
    string matricula;
    cin >> matricula;
    cout << endl;

    this->turma.push_back(Aluno(nome, matricula, birthdate));
}

void System::delete_student()
{
    cout << endl;

    for(unsigned int i=0; i<this->turma.size(); i++)
    {
        cout << "\t" << i << " - " << this->turma[i].get_matricula() << "\t\t" << this->turma[i].get_nome() << endl;
    }

    cout << endl;

    cout << "Option: ";
    unsigned int op;
    cin >> op;

    this->turma.erase(this->turma.begin()+op);

    cout << endl;
}

void System::add_new_grade_to_all()
{
    cout << endl;

    cout << "Grade index: ";
    unsigned int i;
    cin >> i;

    cout << endl;

    if (i >= this->turma[0].get_max_notas())
    {
        cerr << "Invalid index!" << endl;
    }
    else
    {
        for(unsigned int j=0; j<this->turma.size(); j++)
        {
            cout << this->turma[j].get_matricula() << "\t\t" << this->turma[j].get_nome() << endl;
            cout << "Nota " << i << ": ";
            float nota;
            cin >> nota;
            cout << endl;
            this->turma[j].set_nota(i, nota);
        }
    }

    cout << endl;
}

void System::list_all()
{
    cout << endl;

    for(unsigned int i=0; i<this->turma.size(); i++)
    {
        cout << this->turma[i].get_matricula() << "\t\t" << this->turma[i].get_nome() << "\t\t" << this->turma[i].get_birthdate();

        for(unsigned int j=0; j<this->turma[i].get_max_notas(); j++)
        {
            cout << "\t\t" << this->turma[i].get_nota(j);
        }

        cout << endl;
    }

    cout << endl;
}

int System::run()
{
    if (!this->load())
    {
        cerr << "Error loading the database!" << endl;

        return -1;
    }

    while(1)
    {
        this->main_menu.print_main_menu();
        unsigned int option = this->main_menu.get_option();

        switch(option)
        {
            case MENU_OPTION_LOGIN:
                break;
            case MENU_OPTION_LOGOUT:
                break;
            case MENU_OPTION_ADD_NEW_STUDENT:
                this->add_new_student();
                this->save();
                break;
            case MENU_OPTION_DEL_STUDENT:
                this->delete_student();
                break;
            case MENU_OPTION_EDIT_STUDENT:
                break;
            case MENU_OPTION_VIEW_STUDENT:
                break;
            case MENU_OPTION_LIST_ALL_STUDENTS:
                this->list_all();
                break;
            case MENU_OPTION_ADD_NEW_PROFESSOR:
                break;
            case MENU_OPTION_DEL_PROFESSOR:
                break;
            case MENU_OPTION_EDIT_PROFESSOR:
                break;
            case MENU_OPTION_VIEW_PROFESSOR:
                break;
            case MENU_OPTION_LIST_ALL_PROFESSORS:
                break;
            case MENU_OPTION_ADD_NEW_GRADE:
                this->add_new_grade_to_all();
                this->save();
                break;
            case MENU_OPTION_EXIT:
                return 0;
            default:
                cerr << "Invalid option!" << endl;
        }
    }

    return -1;
}

//! \} End of system group
