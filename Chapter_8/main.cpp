#include <iostream>
#include "person.h"
#include "student.h"
int main()
{
    Person p1(20, "John");
    std::cout << p1.get_name() << " is " << p1.get_age() << " years old." << std::endl;
    
    Student s1(22, "Martin", 1001);
    s1.set_institute(std::string("UCL"));
    s1.add_course("English");
    s1.add_course("Economics");
    s1.add_course("French");
    s1.print_info();   

    return 0;
}
