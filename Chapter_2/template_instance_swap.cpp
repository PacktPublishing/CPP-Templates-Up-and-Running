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
    void swap(T& x, T& y)
    {
        T temp;
        temp = x;
        x = y;
        y = temp;
    }
}

int main()
{
    int var1 = 10, var2 = 20;
    std::cout << "Before: var1 = " << var1 << " var2 = " << var2 << "\n";
    mynamespace::swap(var1, var2);
    std::cout << "After: var1 = " << var1 << " var2 = " << var2 << "\n";

    double var3 = 40.5, var4 = 20.5;
    std::cout << "Before: var3 = " << var3 << " var4 = " << var4 << "\n";
    mynamespace::swap(var3, var4);
    std::cout << "Before: var3 = " << var3 << " var4 = " << var4 << "\n";
    
    return 0;
}
