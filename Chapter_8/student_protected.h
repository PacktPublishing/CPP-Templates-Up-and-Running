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
