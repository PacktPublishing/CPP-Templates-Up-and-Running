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

const int max_elements = 5;

template<typename T>
T average(const T mynums)
{
    T avg = 0;
    for(auto index = 0; index < max_elements; ++index) {
        avg += mynums[index];
    }

    return avg/max_elements;
}

int main()
{
    int nums[max_elements] = {10, 20, 30, 40, 50};
    std::cout << average(nums) << std::endl;

    double dnums[max_elements] = {4.2, 5.8, 6.3, 7.8, 9.5};
    std::cout << average(dnums) << std::endl;

    return 0;
}
