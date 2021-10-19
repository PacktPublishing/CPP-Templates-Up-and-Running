#include <iostream>

class A {
public:
    A() {}
    virtual void print() = 0;
};

class B : public A 
{
public: 
    B() {}
    void print() { std::cout << "Hello B" << std::endl; }
};

int main()
{
    B b;
    A *ptr_obj_child_b = &b;
    ptr_obj_child_b->print();

    return 0;
}
