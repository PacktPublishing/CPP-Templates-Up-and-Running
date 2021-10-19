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
class A {
public:
    void welcome() {std::cout << "Hello World" << "\n";}
};
class A obj_A;

template<class A * str>
void print_str()
{
    str->welcome();
}
int main()
{
    print_str<&obj_A>();

    return 0;
}
