#include <iostream>

class A {
public:
    A() {}
    virtual void print() = 0;
};

int main()
{
    A a;

    return 0;
}
