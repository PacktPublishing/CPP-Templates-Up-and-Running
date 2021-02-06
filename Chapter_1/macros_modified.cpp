#include <iostream>

#define multiply(x, y)  ((x) * (y))
int main()
{
    std::cout << multiply(10, 20) << std::endl;
    std::cout << multiply(10 + 10, 20 + 20) << std::endl;

    return 0;
}
