#include <iostream>
template<typename T>
int is_equal(T x, T y)
{
    return x == y;
}

int main()
{
    int var1 = 20, var2 = 20;
    std::cout << " var1 and var2 " 
              << (is_equal(var1, var2) ? " are " : " are not ") 
              << " equal" << std::endl;
    return 0;
}
