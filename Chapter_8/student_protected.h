/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#ifndef __STUDENT_H__
#define __STUDENT_H__
#include "person_protected.h"
#include <vector>
class Student : public Person {
public:
    Student() = delete;
    Student(int, std::string, int);
    ~Student() = default;
    void set_institute(std::string);
    void add_course(std::string);
    void print_info() const;
private:
    int student_id;
    std::string institute;
    std::vector<std::string> courses;
};
#endif 
