#include <iostream>
#include "person.h"
#include "student.h"
int main()
{
    Person p1(20, "John");
    std::cout << p1.get_name() << " is " << p1.get_age() << " years old." << std::endl;
    
    return 0;
}
