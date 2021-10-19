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
T increment(T& x)
{
    return ++x;
}
int main()
{
    double dval = 10.5;
    std::cout << "double incr = " << increment(dval) << std::endl;
    int ival = 20;
    std::cout << "int incr = " << increment(ival) << std::endl;
    return 0;
}
