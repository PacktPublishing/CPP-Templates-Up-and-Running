#include <iostream>
class Base {
public:
    void foo() {std::cout << "Hello World" << std::endl;}
};
class Derived : public Base {
};
class Derived2 : private Base {
};
int main()
{
    Derived d;
    Derived2 d2;

    d.foo();
    d2.foo();

    return 0;
}

