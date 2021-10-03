#include <iostream>

class A {
public:
    void message() { std::cout << "Hello World" << std::endl;}
};

class B : public A {
};
class C : public A {
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

