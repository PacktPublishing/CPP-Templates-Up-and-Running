#include <iostream>
struct foo_struct {
    int a;
};
template<typename T>
void foo(T& mystruct)
{
    std::cout << "a = " << mystruct.c << std::endl;
}
int main()
{
    foo_struct mystruct{10};
    foo(mystruct);
    return 0;
}

