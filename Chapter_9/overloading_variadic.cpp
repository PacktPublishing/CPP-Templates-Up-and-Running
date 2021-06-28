#include <iostream>
template<typename T>
void foo(T val1, T val2)
{
    std::cout << "From non-variadic" << std::endl;
    std::cout << val1 << " " << val2 << std::endl;
}

template<typename T, typename... rest>
void foo(T val, rest... argPack)
{
    std::cout << "From variadic" << std::endl;
    std::cout << val << std::endl;
    foo(argPack...);
}


int main()
{
    foo(10, 20);
    foo(10, 20, 30, 40);
    return 0;
}
