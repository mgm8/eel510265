/*
 * queue.h
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
 * \brief Queue as linked list definition/implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.6
 * 
 * \date 05/11/2019
 * 
 * \defgroup queue Queue
 * \{
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include "node.hpp"

/**
 * \brief Queue object.
 */
template <typename T>
class Queue
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Queue()
            : head(NULL),
              tail(NULL),
              length(0)
        {
        }

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Queue()
        {
        }

        /**
         * \brief Adds a new element to the end of the queue.
         *
         * \param[in] data is the new node to be inserted at the end of the queue.
         *
         * \return None.
         */
        void enqueue(T data)
        {
            this->length++;

            Node<T> *temp = new Node<T>(data, NULL);

            if (this->head == NULL)
            {
                this->head = temp;
                this->tail = temp;
            }
            else
            {
                this->tail->next = temp;
                this->tail = temp;
            }
        }

        /**
         * \brief Removes an element from the beginning of the queue.
         *
         * \return The first element of the queue.
         */
        T dequeue()
        {
            if (this->head == NULL)
            {
                return T();     // The queue is empty
            }
            else
            {
                this->length--;

                Node<T> *temp = this->head;

                this->head = this->head->next;

                return temp->data;
            }
        }

        /**
         * \brief Gets the size of the queue.
         *
         * \return The number of elements of the queue.
         */
        unsigned int size()
        {
            return this->length;
        }

        /**
         * \brief Verifies if the queue is empty or not.
         *
         * \return TRUE/FALSE if the queue is empty or not.
         */
        bool is_empty()
        {
            return this->length == 0 ? true : false;
        }

    private:

        /**
         * \brief Head of the queue.
         */
        Node<T> *head;

        /**
         * \brief Tail of the queue.
         */
        Node<T> *tail;

        /**
         * \brief Number of elements of the queue.
         */
        unsigned int length;
};

#endif // QUEUE_H_

//! \} End of queue group
