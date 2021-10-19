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
    return x + y;
}

int main()
{
    std::cout << add(10, 20) << std::endl;
    std::cout << add(10, 20.2) << std::endl;

    return 0;
}
