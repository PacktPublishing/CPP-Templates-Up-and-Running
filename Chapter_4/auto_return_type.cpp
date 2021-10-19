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
auto get_coef(T type)
{
    auto ret = 0.0;
    switch(type) {
    case 1:
        ret = 20.5;
        break;
    case 2:
        ret = 100.50;
        break;
    default:
        ret = 200.3;
    }
    return ret;
}

int main()
{
    int type = 2;
    std::cout << get_coef(type) << std::endl;
    return 0;
}

