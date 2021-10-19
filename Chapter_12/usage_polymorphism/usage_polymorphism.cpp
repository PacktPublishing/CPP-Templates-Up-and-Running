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

void print_message(A *generic_ptr)
{
    generic_ptr->message();
}

int main()
{
    A a;
    B b;
    C c;
    A * ptr_obj_a = &a;
    A * ptr_child_b = &b;
    A * ptr_child_c = &c;

    print_message(ptr_obj_a);
    print_message(ptr_child_b);
    print_message(ptr_child_c);

    return 0;
}

