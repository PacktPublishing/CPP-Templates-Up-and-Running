/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include "manager.h"
ManagerClass::ManagerClass()
{
}

void ManagerClass::ManageTeam()
{
    std::cout << "Managing Team" << std::endl;
}

void ManagerClass::AllocateResources()
{
    std::cout << "Allocating Resources" << std::endl;
}

void ManagerClass::AllocateBudget()
{
    std::cout << "Allocating Budget" << std::endl;
}

ManagerClass::~ManagerClass()
{
}
