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
};

int main()
{
    B b;

    return 0;
}
