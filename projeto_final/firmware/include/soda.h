/*
 * soda.h
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
 * \brief Soda definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.13
 * 
 * \date 20/10/2019
 * 
 * \defgroup soda Soda
 * \{
 */

#ifndef SODA_H_
#define SODA_H_

#include <string>

#define SODA_DEFAULT_NAME       "SODA"
#define SODA_DEFAULT_PRICE      0.0

/**
 * \brief Soda types.
 */
enum soda_e
{
    SODA_MEETS=0,   /**< MEETS. */
    SODA_ETIRPS     /**< ETIRPS. */
};

/**
 * \brief Soda generic class.
 */
class Soda
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Soda();

        /**
         * \brief Constructor (overloaded).
         *
         * \param[in] id is an string with the ID code of the soda.
         * \param[in] name is an string with the name of the soda.
         * \param[in] price is the new price of the soda.
         *
         * \return None.
         */
        Soda(std::string id, std::string name, float price);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Soda();

        /**
         * \brief Sets the ID of the soda.
         *
         * \param[in] id is the ID code of the soda.
         *
         * \return None.
         */
        void set_id(std::string id);

        /**
         * \brief Gets the ID of the soda.
         *
         * \return The ID code of the soda as an string.
         */
        std::string get_id();

        /**
         * \brief Sets the name of the soda.
         *
         * \param[in] name is an string with the new name of the soda.
         *
         * \return None.
         */
        void set_name(std::string name);

        /**
         * \brief Gets the name of the soda as an string.
         *
         * \return The name of the soda.
         */
        std::string get_name();

        /**
         * \brief Sets the price of the soda.
         *
         * \param[in] price is the new price of the soda.
         *
         * \return None.
         */
        void set_price(float price);

        /**
         * \brief Gets the price of the soda.
         *
         * \return The price of the soda.
         */
        float get_price();

    private:

        /**
         * \brief Unique ID code.
         */
        std::string id;

        /**
         * \brief Soda name.
         */
        std::string name;

        /**
         * \brief Soda price value.
         */
        float price;
};

#endif // SODA_H_

//! \} End of soda group
