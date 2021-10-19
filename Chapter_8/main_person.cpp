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
#include "person.h"
#include "student.h"
int main()
{
    Person p1(20, "John");
    std::cout << p1.get_name() << " is " << p1.get_age() << " years old." << std::endl;
    
    return 0;
}
