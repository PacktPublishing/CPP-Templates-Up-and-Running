/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include "sample_template_declaration.h"
template<typename T>
MyTemplate<T>::MyTemplate(T x) : val(x)
{
}

template<typename T>
T MyTemplate<T>::get_val()
{
    return val;
}

template class MyTemplate<int>;
template class MyTemplate<char>; 
