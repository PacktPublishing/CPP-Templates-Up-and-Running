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
void set_value(const T var)
{
    if(var) {
        *var = 100;
    }
}
int main()
{
    int myvar = 0;
    set_value(&myvar);
    std::cout << "Value at myvar = " << myvar << std::endl;
    return 0;
}
