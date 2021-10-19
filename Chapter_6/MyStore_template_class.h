/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#ifndef __MYSTORE_TEMPLATE_CLASS__
#define __MYSTORE_TEMPLATE_CLASS__
#include <iostream>
#include <iomanip>
#include <iostream>
#include <iomanip>
#include <string.h>

template<typename T>
class MyStore {
private:
    T *store;
    size_t len;
    size_t curr_len;
public:
    MyStore();
    explicit MyStore(size_t);
    MyStore<T>(const MyStore<T>&);
    MyStore<T>& operator =(const MyStore<T>&);
    void add_element(T);
    double average();
    ~MyStore();
};

template<typename T>
MyStore<T>::MyStore() : store(nullptr), len(0), curr_len(0)
{
    // this will create an empty object
}

template<typename T>
MyStore<T>::MyStore(size_t len) : len(len), curr_len(0)
{
    store = new T[len];
}

template<typename T>
MyStore<T>::MyStore(const MyStore<T>& other)
{
    len = other.len;
    curr_len = other.curr_len;
    store = new T[len];
    memset(store, 0, sizeof(T) * len);
    memcpy(store, other.store, len);
}

template<typename T>
MyStore<T>& MyStore<T>::operator=(const MyStore<T>& other)
{
    if( this != &other) {
        if(!store) {
            len = other.len;
            curr_len = other.curr_len;
            store = new T[len];
            memset(store, 0, sizeof(T) * len);
            memcpy(store, other.store, len);
        } else {
            std::cout << "Store not empty!" << std::endl;
        }
    }
    return *this;
}

template<typename T>
MyStore<T>::~MyStore()
{
    delete [] store;
}

template<typename T>
void MyStore<T>::add_element(T elem)
{
    if(curr_len < len) {
        store[curr_len++] = elem;
    } else {
        std::cout << "Maximum size of the store reached." << std::endl;
    }
}

template<typename T>
double MyStore<T>::average()
{
    auto avg = 0.0;
    for(size_t index = 0; index < curr_len; ++index)
        avg += store[index];
    avg = (double)avg / curr_len;
    return avg;
}
#endif // __MYSTORE_TEMPLATE_CLASS__
