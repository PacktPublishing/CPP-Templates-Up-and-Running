/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include "employee_class.h"
int main()
{
    EmployeeClass e;
    e.SetName(std::string("Alan"));
    e.SetEmplyeeId(100);
    std::cout << "Employee Name: " << e.GetEmployeeName() << std::endl;
    std::cout << "Employee Id: " << e.GetEmployeeId() << std::endl;

    return 0;
}
