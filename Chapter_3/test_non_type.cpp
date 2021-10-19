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

using namespace std;
int numbers[6] = {1, 2, 3, 4, 5, 6};

template <int * nums> //pointer to object
void f(int n)
{
    for(int i=0; i < n; ++i)
        cout << numbers[i] << endl;
}

int main() {
        f<numbers>(6);

        return 0;
}

