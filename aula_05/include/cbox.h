/*
 * cbox.h
 * 
 * Copyright (C) 2019, Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * This file is part of EEL510265-Aula-05.
 * 
 * EEL510265-Aula-05 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * EEL510265-Aula-05 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with EEL510265-Aula-05. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief CBox object definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 1.0
 * 
 * \date 19/09/2019
 * 
 * \defgroup cbox cbox
 * \{
 */

#ifndef CBOX_H_
#define CBOX_H_

#include "cshape3d.h"

/**
 * \brief .
 */
class CBox: public CShape3D
{
    private:
    public:

        /**
         * \brief .
         *
         * \return None.
         */
        CBox(float x, float y, float z);

        /**
         * \brief .
         *
         * \param[in] x
         * \param[in] y
         * \param[in] z
         *
         * \return None.
         */
        void set_dimensions(float x, float y, float z);
};

#endif // CBOX_H_

//! \} End of cbox group
