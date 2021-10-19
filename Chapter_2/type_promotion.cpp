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

namespace mynamespace {
    template<typename T>
    T is_equal(const T& x, const T& y)
    {
        return x == y;
    }
}

int main()
{
    int var1 = 10, var2 = 20;
    if(mynamespace::is_equal<double>(var1, var2)) {
        std::cout << var1 << " " << var2 << " are equal" << std::endl;
    } else {
        std::cout << var1 << " " << var2 << " are not equal" << std::endl;
    }

    double var3 = 40.5, var4 = 40.5;
    if(mynamespace::is_equal<long>(var3, var4)) {
        std::cout << var3 << " " << var4 << " are equal" << std::endl;
    } else {
        std::cout << var3 << " " << var4 << " are not equal" << std::endl;
    }
    
    return 0;
}
