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

char name[256];
template<char * str>
void print_str()
{
    std::cout << str << std::endl;
}

int main()
{
    strcpy(name, "Hello World");
    print_str<name>();

    return 0;
}
