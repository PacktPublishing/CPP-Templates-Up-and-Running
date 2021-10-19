/*************************************************************************\
*                  Copyright (C) Vivek Bhadra.                            *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include <iostream>
int foo(int x, int y)
{
    return x + y;
}
double foo(double x, double y)
{
    return x + y;
}
int main()
{
    std::cout << foo(10, 20) << std::endl;
    std::cout << foo(10.2, 20.3) << std::endl;
    std::cout << foo(10, 'A') << std::endl;
    return 0;
}

