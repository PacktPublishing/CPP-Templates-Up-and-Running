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
class Base {
public:
    void foo() {std::cout << "Hello World" << std::endl;}
};
class Derived : public Base {
};
class Derived2 : private Base {
};
int main()
{
    Derived d;
    Derived2 d2;

    d.foo();
    d2.foo();

    return 0;
}

