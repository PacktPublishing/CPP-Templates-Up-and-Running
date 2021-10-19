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
template<typename T>
class MyTemplate {
    private:
        T data;
    public:
        MyTemplate() = default;
        MyTemplate(T val);
        T get_val() const;
        void print_val();
        void print_welcome_message();
        ~MyTemplate() = default;
};

template<typename T>
MyTemplate<T>::MyTemplate(T val) : data(val)
{
}

template<typename T>
T MyTemplate<T>::get_val() const 
{
    return data;
}

template<typename T>
void MyTemplate<T>::print_welcome_message()
{
    std::cout << "Welcome to Templates" << std::endl;
}
#endif 

