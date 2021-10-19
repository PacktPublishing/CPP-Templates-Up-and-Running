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
auto my_size_of(const char *str, size_t& len)
{
    printf("%s:%d: size = ", __FILE__, __LINE__);
    len = strlen(str);
}

template<typename T>
auto my_size_of(T x)
{
    printf("%s:%d: size = ", __FILE__, __LINE__);
    return sizeof(x);
}

template<typename T, typename U>
size_t my_size_of(T x, U y)
{
    printf("%s:%d: size = ", __FILE__, __LINE__);
    return sizeof(x) + sizeof(y);
}

int main()
{
    size_t len;
    const char * str = "PACKT";
    my_size_of(str, len);
    std::cout << len << std::endl;
    std::cout << my_size_of(10) << std::endl;
    std::cout << my_size_of(4.5) << std::endl;
    std::cout << my_size_of(10, 2.5) << std::endl;
    return 0;
}
