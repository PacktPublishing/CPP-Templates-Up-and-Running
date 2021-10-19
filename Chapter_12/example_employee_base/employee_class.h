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

class EmployeeClass {
public:
    EmployeeClass();
    void SetName(std::string);
    std::string GetEmployeeName();
    void SetEmplyeeId(int);
    int GetEmployeeId();
    ~EmployeeClass();
private:
    std::string employee_name{""};
    int employee_id{0};
};
