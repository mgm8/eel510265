/*
 * node.h
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
 * \brief Linked list node definition/implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.11
 * 
 * \date 05/11/2019
 * 
 * \defgroup node Node
 * \{
 */

#ifndef NODE_H_
#define NODE_H_

#include <cstddef>

/**
 * \brief Vending Machine Operating System namespace.
 */
namespace vmos
{

/**
 * \brief Node class.
 */
template <typename T>
class Node
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Node()
            : next(NULL)
        {
        }

        /**
         * \brief Constructor (overloaded).
         *
         * \param[in] d is the data of the node.
         * \param[in] n is a pointer to the next node of the list.
         *
         * \return None.
         */
        Node(T d, Node *n)
        {
            this->data = d;
            this->next = n;
        }

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Node()
        {
        }

        /**
         * \brief The data of the Node.
         */
        T data;

        /**
         * \brief Pointer to the next Node object.
         */
        Node *next;
};

}   // namespace vmos

#endif // NODE_H_

//! \} End of node group
