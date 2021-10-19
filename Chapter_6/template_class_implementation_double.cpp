/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include "MyStore_template_class.h"
int main()
{
    MyStore<double> s(5); // store created the for 5 elements
    s.add_element(23.5);
    s.add_element(50.1);
    s.add_element(10.4);
    s.add_element(12.3);
    s.add_element(5.7);
    s.add_element(34.8); // 6th element added
    std::cout << std::fixed << std::setprecision(2) << s.average() << std::endl;
    return 0;
}

