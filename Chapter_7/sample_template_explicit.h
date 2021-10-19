/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#ifndef __SAMPLE_TEMPLATE_EXPLICIT__
#define __SAMPLE_TEMPLATE_EXPLICIT__
#include <iostream>
template<typename T>
class MyTemplate {
    public:
        MyTemplate() = default;
        MyTemplate(T x);
        void print_val();
        ~MyTemplate() = default;
    private:
        T val;
};

template<typename T>
MyTemplate<T>::MyTemplate(T x) : val(x) {}

template<typename T>
void MyTemplate<T>::print_val()
{
    std::cout << val << std::endl;
}
#endif 
