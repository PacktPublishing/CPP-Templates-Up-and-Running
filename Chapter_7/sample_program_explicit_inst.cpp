/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include "sample_template_declaration.h"

int main()
{
    MyTemplate<int> myObj(10);
    myObj.get_val();
    MyTemplate<char> myObj2('A');
    myObj2.get_val();
    
    return 0;
}
