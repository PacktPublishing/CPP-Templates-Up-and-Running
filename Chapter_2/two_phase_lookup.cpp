#include <iostream>
struct foo_struct {
    int a;
};
template<typename T>
void foo(T& mystruct)
{
    std::cout << "a = " << mystruct.c << std::endl
}
int main()
{
    std::cout << "Hello World" << std::endl;
    return 0;
}

