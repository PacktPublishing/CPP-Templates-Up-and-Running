#include <iostream>
template<typename T>
T demo(T& x, T& y)
{
    x = 0;
    y = 0;
}
int main()
{
    const int a = 20;
    const int b = 30;
    demo(a, b);
    return 0;
}
