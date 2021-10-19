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
T largest_elem(const T number_set, size_t len)
{
    T largest = number_set[0];
    for(size_t index = 0; index < len; ++index)
        if (number_set[index] > largest)
            largest = number_set[index];
    return largest;
}

int main()
{
    double numbers[] = {20.1, 10.1, 30.1, 5.1, 40.1, 200.1, 50.1, 1.1, 0.5, 100.5};
    double l = largest_elem(numbers, 10);
    std::cout << "largest = " << l << std::endl;
    return 0;
}
