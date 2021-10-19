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
#include <string>

std::string mystr;
template<std::string& str>
auto get_str_len()
{
    auto len = str.length();

    return len;
}

int main()
{
    mystr = "Hello World";
    std::cout << "Length of mystr = " << get_str_len<mystr>() << std::endl;

    return 0;
}
