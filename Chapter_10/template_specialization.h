/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#ifndef __GENERAL_TEMPLATE__
#define __GENERAL_TEMPLATE__
#include <iostream>
#include <string.h>
template<typename T>
size_t size_of(T x)
{
    std::cout << "generic called." << std::endl;
    return sizeof(x);
}

template<>
size_t size_of(char const *str)
{
    std::cout << "specialized called." << std::endl;
    return strlen(str);
}
#endif
