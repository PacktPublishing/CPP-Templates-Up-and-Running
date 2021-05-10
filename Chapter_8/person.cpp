#include <iostream>
class Person {
public:
    Person() = delete;
    Person(int, std::string);
    ~Person() = default;
    void set_age(int age);
    void set_name(std::string name);
    int get_age() const;
    std::string get_name() const;
private:
    int age;
    std::string name;
};

Person::Person(int age, std::string name) : age(age), name(name)
{}
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

int main()
{
    Person p1(20, "John");
    std::cout << p1.get_name() << " is " << p1.get_age() << " years old." << std::endl;

    return 0;
}
