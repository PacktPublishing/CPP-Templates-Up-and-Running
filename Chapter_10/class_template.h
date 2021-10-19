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
#include <string.h>

template<typename T>
class Storage {
public:
    Storage(int sz);
    void add_to_storage(T elem);
    void print_storage();
    ~Storage();
private:
    T *store; //dynamically allocated from the heap
    int max_size{0};
    int curr_size{0};
};

template<typename T>
Storage<T>::Storage(int sz)
{
    max_size = sz;
    store = new T[max_size];
}

template<typename T>
void Storage<T>::add_to_storage(T elem)
{
    if(curr_size < max_size)
    {
        store[curr_size++] = elem;
    } else {
        std::cout << "Storage Full!!" << std::endl;
    }
}

template<typename T>
Storage<T>::~Storage()
{
    delete [] store;
}

template<typename T>
void Storage<T>::print_storage()
{
    for(int i=0; i < curr_size; ++i)
        std::cout << "Pos[" << i << "] value : " << store[i] << std::endl;
}

