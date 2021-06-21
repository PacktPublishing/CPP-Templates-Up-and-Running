#include <iostream>
template<typename T>
T add(T x, T y, T z = T())
{
    return x + y + z;
}

int main()
{
    std::cout << add(10, 20) << std::endl;
    return 0;
}
