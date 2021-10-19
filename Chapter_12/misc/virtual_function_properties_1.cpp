#include <iostream>

class A {
public:
    A() {}
    virtual void print() { std::cout << "Hello World" << std::endl; }
};
int main()
{
    A a;
    a.print();

    return 0;
}
