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
#include <vector>
#include <iomanip>
int main()
{
    std::vector<int> my_vector_store(5);
    my_vector_store.push_back(10);
    my_vector_store.push_back(30);
    my_vector_store.push_back(5);
    my_vector_store.push_back(22);
    my_vector_store.push_back(1);
    my_vector_store.push_back(50);
    
    auto avg = 0.0;    
    for(auto itr : my_vector_store)
        avg = avg + itr;
    std::cout << std::fixed 
              << std::setprecision(2)
              << (double)avg/6
              << std::endl;

    return 0;
}
