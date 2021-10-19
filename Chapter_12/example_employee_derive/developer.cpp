/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include "developer.h"
DeveloperClass::DeveloperClass()
{
}

void DeveloperClass::DevelopSoftware()
{
    std::cout << "Developing Software" << std::endl;
}

void DeveloperClass::TestSoftware()
{
    std::cout << "Testing Software" << std::endl;
}

void DeveloperClass::DeploySoftware()
{
    std::cout << "Deploying Software" << std::endl;
}

DeveloperClass::~DeveloperClass()
{
}
