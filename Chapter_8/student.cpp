#include <iostream>
#include "student.h"
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
    std::cout << get_name() << " is " << get_age() << " years old." << std::endl;
    std::cout << "He is a student of " << institute << std::endl;
    std::cout << "His student id is " << student_id << std::endl;
    std::cout << "He take the following courses:" << std::endl;
    for(auto v : courses) {
        std::cout << "\t" << v << std::endl;
    }
}

