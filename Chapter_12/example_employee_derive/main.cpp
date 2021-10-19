/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

/*
#include "developer.h"
int main()
{
    DeveloperClass d;
    d.SetName(std::string("Alan"));
    d.SetEmplyeeId(100);
    std::cout << "Developer Name: " << d.GetEmployeeName() << std::endl;
    std::cout << "Developer Id: " << d.GetEmployeeId() << std::endl;
    d.DevelopSoftware();
    d.TestSoftware();
    d.DeploySoftware();
    return 0;
}
*/
#include "manager.h"
int main()
{
    ManagerClass m;
    m.SetName(std::string("Alan"));
    m.SetEmplyeeId(100);
    std::cout << "Developer Name: " << m.GetEmployeeName() << std::endl;
    std::cout << "Developer Id: " << m.GetEmployeeId() << std::endl;
    m.ManageTeam();
    m.AllocateResources();
    m.AllocateBudget();

    return 0;
}
