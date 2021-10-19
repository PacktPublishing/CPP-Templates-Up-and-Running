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
template <typename T>
auto select_band(T x) -> decltype((x > 0 && x < 100) ? 1 : 2)
{
    return (x > 0 && x < 100) ? 1 : 2;
}

int main()
{
    std::cout << select_band(100) << std::endl;
    return 0;
}
