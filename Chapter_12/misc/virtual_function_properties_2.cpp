#include <iostream>
class A {
public:
    A() {}
    virtual void print() { std::cout << "Hello World" << std::endl; }
};
class B : public A
{
public:
    B() {}
    void dummy() { std::cout << "I am dummy function" << std::endl; }
};
int main()
{
    B b;
    b.print();
    b.dummy();
    return 0;
}
