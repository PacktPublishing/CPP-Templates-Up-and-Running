#include <iostream>
template<typename T>
T func(T x, T y)
{
    y = 30; 
    return x + y;
}

int main()
{
    const int var1 = 10; 
    const int var2 = 20;
    std::cout << func(var1, var2) << std::endl;
    return 0;
}
