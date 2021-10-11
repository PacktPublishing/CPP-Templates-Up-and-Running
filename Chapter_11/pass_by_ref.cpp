#include <iostream>
template<typename T>
T demo(T& x, T& y)
{
    // doing nothing 
    // cannot modify x and y here as they are const qalified
}
int main()
{
    const int a = 20;
    const int b = 30;
    demo(a, b);
    return 0;
}
