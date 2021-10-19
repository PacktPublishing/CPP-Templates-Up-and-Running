/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

template<typename T>
class Base {
public:
    Base(T x);
    void print_base();
    virtual ~Base();
protected:
    T data;
};

template<typename T>
Base<T>::Base(T x) : data(x) {}

template<typename T>
void Base<T>::print_base()
{
    std::cout << data << std::endl;
}

template<typename T>
Base<T>::~Base() {}

