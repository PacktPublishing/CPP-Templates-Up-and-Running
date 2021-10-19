/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include "sample_templ_undef_header.h"
extern template class MyTemplate<int>;
extern template class MyTemplate<char>;

int main()
{
    MyTemplate<int> obj1(10);
    obj1.print_val();
    MyTemplate<char> obj2('A');

    return 0;
}
