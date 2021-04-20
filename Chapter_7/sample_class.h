#ifndef __SAMPLE_TEMPLATE_H__
#define __SAMPLE_TEMPLATE_H__
#include <iostream>
class MyClass {
    private:
        int data;
    public:
        MyClass() = default;
        MyClass(int val);
        int get_val() const;
        ~MyClass() = default;
};

MyClass::MyClass(int val) : data(val)
{
}

int MyClass::get_val() const 
{
    return data;
}
#endif 


