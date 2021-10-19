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

template<typename T>
class Base {
public:
    Base(T x);
    virtual ~Base();
protected:
    T data;
};

template<typename T>
Base<T>::Base(T x) : data(x) {}

template<typename T>
Base<T>::~Base() {}

template<typename T>
class Derived : public Base<T>
{
public:
    using Base<T>::data;
    Derived(T x);
    void print();
private:
};

template<typename T>
Derived<T>::Derived(T x) : Base<T>::Base(x) {}

template<typename T>
void Derived<T>::print()
{

    std::cout << " data " << data << std::endl;}

int main()
{
    Derived<int> d1(10);
    d1.print();

    return 0;
}

