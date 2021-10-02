#include <iostream>
template<typename T>
void foo(T *ptr)
{
    *ptr = 100;
    std::cout << ptr;
}

int main()
{
    int val = 10;
    const int *ptr = &val;
    foo(ptr);
    
    return 0;
}
