#include <iostream>
template <typename T>
int add(T x, T y)
{
    return x + y;
}

int main()
{
    std::cout << add(10, 20.5) << std::endl;

    return 0;        
}
