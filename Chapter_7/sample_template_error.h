/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#ifndef __SAMPLE_TEMPLATE_ERROR__
#define __SAMPLE_TEMPLATE_ERROR__
#include <iostream>
template<typename T>
class MyTemplate {
    public:
        MyTemplate() = default;
        void foo();
        ~MyTemplate() = default;
    private:
};

template<typename T>
void MyTemplate<T>::foo()
{
    int var = 10;
    std::cout << var
}
#endif 
