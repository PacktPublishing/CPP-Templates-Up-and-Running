#ifndef __GENERAL_TEMPLATE__
#define __GENERAL_TEMPLATE__
#include <iostream>
#include <string.h>
template<typename T>
size_t size_of(T x)
{
    std::cout << "generic called." << std::endl;
    return sizeof(x);
}

template<>
size_t size_of(char const *str)
{
    std::cout << "specialized called." << std::endl;
    return strlen(str);
}
#endif
