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
#include <string.h>
const int max_size = 32;
template<typename T>
T* my_alloc_factory()
{
    return new T[max_size];
}

int main()
{
    char *myPtr = my_alloc_factory();
    strncpy(myPtr, "Hello World", max_size);
    std::cout << myPtr << std::endl;
    delete[] myPtr;
    return 0;
}
