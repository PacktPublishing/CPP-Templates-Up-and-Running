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
int add(int x, int y)
{
    x = 50;
    return x + y;
}

int main()
{
    const int a = 20;
    const int b = 30;
    std::cout << add(a, b) << std::endl;
    
    return 0;
}
