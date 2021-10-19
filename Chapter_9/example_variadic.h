/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#ifndef __EXAMPLE_VARIADIC_H__ 
void printEmployee()
{
}

template<typename first, typename... rest>
void printEmployee(first arg, rest... argPack)
{
    std::cout << arg;
    printEmployee(argPack...);
}
#endif //__EXAMPLE_VARIADIC_H__
