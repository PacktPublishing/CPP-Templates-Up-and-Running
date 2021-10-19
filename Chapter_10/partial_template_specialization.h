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
#include <string.h>

template<typename T, typename U, typename V>
class Example {
public:
    void func() {std::cout << "Primary Template" << std::endl;}
};

template<typename U, typename V>
class Example<char, U, V> {
public:
    void func() {std::cout << "Partial Specialization for T = char" << std::endl;}
};
