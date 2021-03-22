#include <iostream>

void foo(auto a)
{
    std::cout << a << std::endl;
}

int main()
{
    foo(100);
    return 0;
}
