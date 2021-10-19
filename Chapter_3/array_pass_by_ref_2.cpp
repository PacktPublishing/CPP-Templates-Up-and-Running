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
void process_array(const T& store)
{
    for(size_t index = 0; index < sizeof(store)/sizeof(store[0]); ++index)
        std::cout << store[index] << " ";
    std::cout << "\n";
}

int main()
{
    int myarray[] = {10, 20, 30, 40};
    process_array(myarray);

    return 0;
}
