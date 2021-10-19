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
#include "person.h"
Person::Person(int age, std::string name) : age(age), name(name)
{
}
void Person::set_age(int age)
{
    age = age;
}
void Person::set_name(std::string name)
{
    name = name;
}
int Person::get_age() const
{
    return age;
}
std::string Person::get_name() const
{
    return name;
}
