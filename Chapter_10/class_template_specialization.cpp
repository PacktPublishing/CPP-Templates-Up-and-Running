/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include "class_template_specialization.h"
int main()
{
    Storage<int> s(10);
    s.add_to_storage(20);
    s.print_storage();

    Storage<char *> s2(3);
    s2.add_to_storage(const_cast<char *>("John"));
    s2.add_to_storage(const_cast<char *>("Ashis"));
    s2.add_to_storage(const_cast<char *>("Kelvin"));
    s2.add_to_storage(const_cast<char *>("Joe"));
    s2.print_storage();

    return 0;
}
