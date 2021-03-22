#include <iostream>
template<typename T>
T add(const T& x, const T& y)
{
    return x + y;  
}

int main(void)
{
    std::cout << add(10, 20) << std::endl;

    return 0;
}
