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
int max(int x, int y)
{
    printf("Non-template version called.\n");
    return x > y ? 1 : 0;
}

template<typename T>
T max(T x, T y)
{
    printf("Template version called.\n");
    return x > y ? 1 : 0;
}

int main()
{
    int a = 10, b = 20;
    auto ret = max(a, b) ? " bigger" : " smaller";
    if(ret) 
        std::cout << "a is bigger " << std::endl;
    else 
        std::cout << "b is bigger" << std::endl;
    return 0;
}

