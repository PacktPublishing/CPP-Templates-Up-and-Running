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
template<typename T, typename U>
U get_coef(T type)
{
    std::cout << type << std::endl;
    U ret;
    switch(type) {
    case 1:
        ret = 20.5;
        break;
    case 2:
        ret = 100.5;
        break;
    default:
        ret = 10.4;
    }
    return ret;
}

int main()
{
    int type = 2;
    std::cout << get_coef<double>(type) << std::endl;
    return 0;
}

