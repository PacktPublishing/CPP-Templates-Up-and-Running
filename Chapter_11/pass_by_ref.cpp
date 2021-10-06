#include <iostream>
template<typename T>
T add(T& x, T& y)
{
    //x = 60;
    return x + y;
}

int main()
{
    const int a = 20;
    const int b = 30;
    std::cout << add(a, b) << std::endl;

    return 0;
}
