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
#include<vector>
#include<algorithm>

template<typename T>
T max_elem_templ(const std::vector<T>& vec)
{
    return *std::max_element(vec.begin(), vec.end(), std::less<T>());
}

int main()
{
    std::vector<int> myvector;
    myvector.push_back(10);
    myvector.push_back(120);
    myvector.push_back(50);
    myvector.push_back(1000);
    myvector.push_back(30);

    std::cout << max_elem_templ(myvector) << std::endl;

    return 0;
}
