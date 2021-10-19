/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include "template_base_class.h"
template<typename T>
class Derived : public Base<T>
{
public:
    using Base<T>::print_base;
    using Base<T>::data;
    Derived(T x);
    void print_derived();
private:
};

template<typename T>
Derived<T>::Derived(T x) : Base<T>::Base(x) {}

template<typename T>
void Derived<T>::print_derived()
{
    print_base();
    std::cout << "data " << data << std::endl;
}
