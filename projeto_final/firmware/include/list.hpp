/*
 * list.h
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
 * \brief Linked list definition/implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.9
 * 
 * \date 17/11/2019
 * 
 * \defgroup list List
 * \{
 */

#ifndef LIST_H_
#define LIST_H_

#include "node.hpp"

/**
 * \brief List object.
 */
template <typename T>
class List
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        List()
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
        ~List()
        {
        }

        /**
         * \brief Adds a new element to the begining of the list.
         *
         * \param[in] data is the new node to be inserted at the begining of the list.
         *
         * \return None.
         */
        void push_front(T data)
        {
            this->length++;

            Node<T> *temp = new Node<T>(data, this->head);

            this->head = temp;
        }

        /**
         * \brief Adds a new element to the end of the list.
         *
         * \param[in] data is the new node to be inserted at the end of the list.
         *
         * \return None.
         */
        void push_back(T data)
        {
            this->length++;

            Node<T> *temp = new Node<T>(data, NULL);

            if (this->head == NULL)
            {
                this->head = temp;
                this->tail = temp;
                temp = NULL;
            }
            else
            {
                this->tail->next = temp;
                this->tail = temp;
            }
        }

        /**
         * \brief Inserts a new element at a given position of the list.
         *
         * \param[in] pos is the position to insert a new node.
         * \param[in] data is the data to insert at the given position.
         *
         * \return None.
         */
        void insert(unsigned int pos, T data)
        {
            this->length++;

            Node<T> *pre = new Node<T>;
            Node<T> *cur = new Node<T>;
            Node<T> *temp = new Node<T>;

            cur = this->head;

            for(unsigned int i=0; i<pos; i++)
            {
                pre = cur;
                cur = cur->next;
            }

            temp->data = data;
            pre->next = temp;
            temp->next = cur;
        }

        /**
         * \brief Removes an element from the beginning of the list.
         *
         * \return The first element of the list.
         */
        T pop_front()
        {
            this->length--;

            Node<T> *temp = new Node<T>;
            temp = this->head;
            this->head = this->head->next;

            return temp->data;
        }

        /**
         * \brief Removes an element from the ending of the list.
         *
         * \return The last element of the list.
         */
        T pop_back()
        {
            this->length--;

            Node<T> *cur = new Node<T>;
            Node<T> *prev = new Node<T>;
            cur = this->head;

            while(cur->next != NULL)
            {
                prev = cur;
                cur = cur->next;
            }

            this->tail = prev;
            prev->next = NULL;

            return cur->data;
        }

        /**
         * \brief Deletes a node at a particular position.
         *
         * \param[in] pos is the position to delete.
         *
         * \return None.
         */
        void erase(unsigned int pos)
        {
            this->length--;

            Node<T> *prev = new Node<T>;
            Node<T> *cur = new Node<T>;

            cur = this->head;

            for(unsigned int i=0; i<pos; i++)
            {
                prev = cur;
                cur = cur->next;
            }

            prev->next = cur->next;
        }

        /**
         * \brief Assignes a new data to a given position.
         *
         * \param[in] pos is the position to modify the content.
         * \param[in] data is the new data of the given position.
         *
         * \return None.
         */
        void assign(unsigned int pos, T data)
        {
            Node<T> *cur = new Node<T>;

            cur = this->head;

            for(unsigned int i=0; i<pos; i++)
            {
                cur = cur->next;
            }

            cur->data = data;
        }

        /**
         * \brief Reads the data at a given position of the list.
         *
         * \param[in] pos is the position of the list to read.
         *
         * \return None.
         */
        T at(unsigned int pos)
        {
            Node<T> *cur = new Node<T>;
            cur = this->head;

            for(unsigned int i=0; i<pos; i++)
            {
                cur = cur->next;
            }

            return cur->data;
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
         * \brief Verifies if the list is empty or not.
         *
         * \return TRUE/FALSE if the list is empty or not.
         */
        bool is_empty()
        {
            return this->length == 0 ? true : false;
        }

    private:

        /**
         * \brief Head of the list.
         */
        Node<T> *head;

        /**
         * \brief Tail of the list.
         */
        Node<T> *tail;

        /**
         * \brief Number of elements of the list.
         */
        unsigned int length;
};

#endif // LIST_H_

//! \} End of list group
