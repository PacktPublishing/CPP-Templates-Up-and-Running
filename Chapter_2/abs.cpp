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
T abs(T myvar)
{
    return myvar > 0 ? myvar : (-myvar);
}

int main()
{
    double dVar = -20.5;
    std::cout << abs(dVar) << std::endl;
    int iVar = 10;
    std::cout << abs<>(iVar) << std::endl;
    char cVar = 'A';
    std::cout << abs(cVar) << std::endl;

    return 0;
}
