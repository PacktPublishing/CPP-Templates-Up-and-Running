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
using namespace std;

template<class T> 
const T& min(const T& a, const T& b)
{
    return (b < a) ? b : a;
}

int main()
{
    int min_of_int = min(100, 200);
    std::cout << "Min of 100 and 200 is " << min_of_int << std::endl;

    return 0;    
}
