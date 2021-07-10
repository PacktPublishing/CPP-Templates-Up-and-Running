#ifndef __GENERAL_TEMPLATE__
#define __GENERAL_TEMPLATE__
#include <iostream>
#include <string.h>
template<typename T>
size_t size_of(T x)
{
    return sizeof(x);
}

#endif
