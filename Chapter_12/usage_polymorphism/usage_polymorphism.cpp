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
    virtual void message() { std::cout << "Hello World" << std::endl;}
};

class B : public A {
public: 
    void message() { std::cout << "Hello B" << std::endl;}
};
class C : public A {
public: 
    void message() { std::cout << "Hello C" << std::endl;}
};

void print_message(A *generic_ptr)
{
    generic_ptr->message();
}

int main()
{
    A a;
    B b;
    C c;
    A * ptr_obj_a = &a;
    A * ptr_child_b = &b;
    A * ptr_child_c = &c;

    print_message(ptr_obj_a);
    print_message(ptr_child_b);
    print_message(ptr_child_c);

    return 0;
}

