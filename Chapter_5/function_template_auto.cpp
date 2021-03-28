#include <iostream>

void foo(auto a)
{
    std::cout << a << std::endl;
}

int main()
{
    foo(100);
    foo('a');
    foo(22.2);
    return 0;
}
