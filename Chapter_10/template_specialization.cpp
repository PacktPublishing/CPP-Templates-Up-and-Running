/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include<iostream>
#include "template_specialization.h"
int main()
{
    std::cout << size_of(10) << std::endl;
    std::cout << size_of(4.2) << std::endl;
    std::cout << size_of("Hello World") << std::endl;

    return 0;
}

