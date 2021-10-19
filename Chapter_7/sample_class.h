/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#ifndef __SAMPLE_TEMPLATE_H__
#define __SAMPLE_TEMPLATE_H__
#include <iostream>
class MyClass {
    private:
        int data;
    public:
        MyClass() = default;
        MyClass(int val);
        int get_val() const;
        ~MyClass() = default;
};

MyClass::MyClass(int val) : data(val)
{
}

int MyClass::get_val() const 
{
    return data;
}
#endif 


