/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#ifndef __H_EXPLICIT_INST__
#define __H_EXPLICIT_INST__
#include <iostream>
template<typename T>
T add(T x, T y)
{
    return x + y;
}

//template int add<int>(int x, int y);
#endif 
