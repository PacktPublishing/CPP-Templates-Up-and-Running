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
    MyStore<int> s(5); // store created the for 5 elements
    s.add_element(10);
    s.add_element(30);
    s.add_element(5);
    s.add_element(22);
    s.add_element(1);
    s.add_element(50); // 6th element added
    std::cout << std::fixed << std::setprecision(2) << s.average() << std::endl;

    MyStore<int> s2 = s;
    std::cout << std::fixed << std::setprecision(2) << s2.average() << std::endl;
    MyStore<int> s3;
    s3 = s2;
    std::cout << std::fixed << std::setprecision(2) << s3.average() << std::endl;

    return 0;
}

