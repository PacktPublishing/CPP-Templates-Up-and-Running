#include <iostream>
template<typename T>
T func(const T x, const T y)
{
    y = 30; 
    return x + y;
}

int main()
{
    int var1 = 10; 
    int var2 = 20;
    std::cout << func(var1, var2) << std::endl;
    return 0;
}
