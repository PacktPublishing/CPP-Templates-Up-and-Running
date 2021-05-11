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
