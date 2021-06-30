#include <iostream>
void foo()
{

}

template<typename T, typename... rest>
void foo(T val, rest... argPack)
{
    std::cout << val << std::endl;
    std::cout << "size of the parameter pack = " 
              << sizeof...(rest) << std::endl;
    foo(argPack...);
}

int main()
{
    foo(10, 'A', 50.3, "PACKT");
    return 0;
}
