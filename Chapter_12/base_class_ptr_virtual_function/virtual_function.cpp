#include <iostream>

class A {
public:
    virtual void message() { std::cout << "Hello World" << std::endl;}
};

class B : public A {
public: 
    void message() { std::cout << "Hello B" << std::endl;}
};
class C : public A {
public: 
    void message() { std::cout << "Hello C" << std::endl;}
};

int main()
{
    B b;
    C c;
    A * ptr_child_b = &b;
    A * ptr_child_c = &c;

    ptr_child_b->message();
    ptr_child_c->message();

    return 0;
}

