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
void foo()
{

}

template<typename T, typename... rest>
void foo(T val, rest... argPack)
{
    std::cout << val << std::endl;
    std::cout << "size of the parameter pack = " 
              << sizeof...(rest) << std::endl;
    foo(argPack...);
}

int main()
{
    foo(10, 'A', 50.3, "PACKT");
    return 0;
}
