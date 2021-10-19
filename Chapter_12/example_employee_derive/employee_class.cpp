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
EmployeeClass::EmployeeClass()
{
    // not much to do in constructor for this example
}

void EmployeeClass::SetName(std::string name)
{
    employee_name = name;
}
std::string EmployeeClass::GetEmployeeName()
{
    return employee_name;
}
void EmployeeClass::SetEmplyeeId(int id)
{
    employee_id = id;
}
int EmployeeClass::GetEmployeeId()
{
    return employee_id;
}

EmployeeClass::~EmployeeClass()
{
    // not much to do in destructor for this example
}
