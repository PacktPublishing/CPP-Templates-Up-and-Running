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
int is_equal(T x, T y)
{
    return x == y;
}

int main()
{
    int var1 = 20, var2 = 20;
    std::cout << " var1 and var2 " 
              << (is_equal(var1, var2) ? " are " : " are not ") 
              << " equal" << std::endl;
    return 0;
}
