#include <iostream>
class A {
public:
    void welcome() {std::cout << "Hello World" << "\n";}
};
class A obj_A;

template<class A * str>
void print_str()
{
    str->welcome();
}
int main()
{
    print_str<&obj_A>();

    return 0;
}
