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
    A() {}
    virtual void print() { std::cout << "Hello World" << std::endl; }
};
class B : public A
{
public:
    B() {}
    void dummy() { std::cout << "I am dummy function" << std::endl; }
};
int main()
{
    B b;
    b.print();
    b.dummy();
    return 0;
}
