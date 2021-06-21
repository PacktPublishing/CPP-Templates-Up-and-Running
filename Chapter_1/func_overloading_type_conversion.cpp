#include <iostream>
int foo(int x, int y)
{
    return x + y;
}
double foo(double x, double y)
{
    return x + y;
}
int main()
{
    std::cout << foo(10, 20) << std::endl;
    std::cout << foo(10.2, 20.3) << std::endl;
    std::cout << foo(10, 'A') << std::endl;
    return 0;
}

