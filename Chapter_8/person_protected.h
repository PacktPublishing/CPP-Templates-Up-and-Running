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
