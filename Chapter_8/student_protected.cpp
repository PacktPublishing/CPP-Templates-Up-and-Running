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
#include "student_protected.h"
Student::Student(int age, std::string name, int student_id) : Person(age, name), student_id(student_id)
{
}

void Student::set_institute(std::string institute_name)
{
    institute = institute_name;
}

void Student::add_course(std::string course_name)
{
    courses.push_back(course_name);
}

void Student::print_info() const
{
    std::cout << name << " is " << age << " years old." << std::endl;
    std::cout << "He is a student of " << institute << std::endl;
    std::cout << "His student id is " << student_id << std::endl;
    std::cout << "He take the following courses:" << std::endl;
    for(auto v : courses) {
        std::cout << "\t" << v << std::endl;
    }
}

