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
void process_array(const T store, size_t len)
{
    for(size_t index = 0; index < len; ++index) {
        store[index] = 100;
    }
    for(size_t index = 0; index < len; ++index)
        std::cout << store[index] << " ";
    std::cout << "\n";
}

int main()
{
    int mystore[] = {10, 20, 30, 40};
    process_array(mystore, 4);
 
   return 0;
}
