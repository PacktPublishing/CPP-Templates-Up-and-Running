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

template<typename T>
void add_to_store(std::vector<T>& store, T val)
{
    store.push_back(val);
}

int main()
{
    std::vector<int> data_store;
    int val = 10;
    add_to_store(data_store, val);

    return 0;
}

