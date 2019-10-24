/*
 * drink.h
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
 * \brief Drink definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.4
 * 
 * \date 20/10/2019
 * 
 * \defgroup drink Drink
 * \{
 */

#ifndef DRINK_H_
#define DRINK_H_

#include <string>

#define DRINK_DEFAULT_NAME      "DRINK"
#define DRINK_DEFAULT_PRICE     0.0

/**
 * \brief Drink types.
 */
enum drink_e
{
    DRINK_MEETS=0,      /**< MEETS. */
    DRINK_ETIRPS        /**< ETIRPS. */
};

/**
 * \brief Drink generic class.
 */
class Drink
{
    public:

        /**
         * \brief Constructor.
         *
         * \return None.
         */
        Drink();

        /**
         * \brief Constructor (overloaded).
         *
         * \param[in] id is an string with the ID code of the drink.
         * \param[in] name is an string with the name of the drink.
         * \param[in] price is the new price of the drink.
         *
         * \return None.
         */
        Drink(std::string id, std::string name, float price);

        /**
         * \brief Destructor.
         *
         * \return None.
         */
        ~Drink();

        /**
         * \brief Sets the ID of the drink.
         *
         * \param[in] id is the ID code of the drink.
         *
         * \return None.
         */
        void set_id(std::string id);

        /**
         * \brief Gets the ID of the drink.
         *
         * \return The ID code of the drink as an string.
         */
        std::string get_id();

        /**
         * \brief Sets the name of the drink.
         *
         * \param[in] name is an string with the new name of the drink.
         *
         * \return None.
         */
        void set_name(std::string name);

        /**
         * \brief Gets the name of the drink as an string.
         *
         * \return The name of the drink.
         */
        std::string get_name();

        /**
         * \brief Sets the price of the drink.
         *
         * \param[in] price is the new price of the drink.
         *
         * \return None.
         */
        void set_price(float price);

        /**
         * \brief Gets the price of the drink.
         *
         * \return The price of the drink.
         */
        float get_price();

    private:

        /**
         * \brief Unique ID code.
         */
        std::string id;

        /**
         * \brief Drink name.
         */
        std::string name;

        /**
         * \brief Drink price value.
         */
        float price;
};

#endif // DRINK_H_

//! \} End of drink group
