/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include <iostream>

template<typename T>
void mytemplate(const T var)
{
    *var = 100;
}

int main()
{
    //const int * const ptr;
    int * ptr;
    mytemplate(ptr);

    return 0;
}
