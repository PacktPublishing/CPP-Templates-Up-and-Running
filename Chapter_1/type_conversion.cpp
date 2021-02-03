#include <iostream>
int add(int x, int y)
{
    return x + y;
}

int main()
{
    std::cout << add(10, 20) << std::endl;
    std::cout << add(10, 20.2) << std::endl;

    return 0;
}
