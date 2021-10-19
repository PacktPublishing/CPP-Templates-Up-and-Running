/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#ifndef __PERSON_H__
#define __PERSON_H__
class Person {
public:
    Person() = delete;
    Person(int, std::string);
    ~Person() = default;
    void set_age(int age);
    void set_name(std::string name);
    int get_age() const;
    std::string get_name() const;
protected:
    int age;
    std::string name;
};
#endif 
