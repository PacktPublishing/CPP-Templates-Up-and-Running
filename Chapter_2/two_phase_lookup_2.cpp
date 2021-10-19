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
struct foo_struct {
    int a;
};
template<typename T>
void foo(T& mystruct)
{
    std::cout << "a = " << mystruct.c << std::endl;
}
int main()
{
    foo_struct mystruct{10};
    foo(mystruct);
    return 0;
}

