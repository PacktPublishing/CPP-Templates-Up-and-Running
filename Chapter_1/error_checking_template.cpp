/*************************************************************************\
*                  Copyright (C) Vivek Bhadra.                            *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/
#include <iostream>

struct mystruct {
    int a;
};

template<typename T>
void foo(T& s)
{
    std::cout << s.a << std::endl;
    std::cout << s.b << std::endl;
}

int main()
{
    struct mystruct s{10};
    std::cout << s.a << std::endl;
    foo(s);
    
    return 0;    
}
