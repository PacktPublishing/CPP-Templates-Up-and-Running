#ifndef __H_EXPLICIT_INST__
#define __H_EXPLICIT_INST__
#include <iostream>
template<typename T>
T add(T x, T y)
{
    return x + y;
}

template int add<int>(int x, int y);
#endif 
