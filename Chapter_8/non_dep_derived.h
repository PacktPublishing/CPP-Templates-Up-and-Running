/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include "non_dep_base.h"
template<typename T>
class Derived : public NonDep {
public:
    Derived(T);
    void print_val();
    ~Derived();
private:

};

template<typename T>
Derived<T>::Derived(T x) : NonDep(x) {}

template<typename T>
void Derived<T>::print_val() { std::cout << "val = " << val << std::endl;}

template<typename T>
Derived<T>::~Derived() {}
