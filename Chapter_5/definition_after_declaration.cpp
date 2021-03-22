#include <iostream>
void foo()
{
    std::cout << add(10, 50) << std::endl;
}

template<typename T>
T add(const T& x, const T& y)
{
    return x + y;
}

int main(void)
{
    foo();
    return 0;
}
