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
#include "example_variadic.h"

int main(void)
{
    printEmployee("Name = ", "John Smith", ", ",
                  "Age = ", 40, ", ",
                  "Job Title = ", "Sr. Editor PACKT", ", ",
                  "Salary = £", 800000.00,
                  "\n");
    return 0;
}
