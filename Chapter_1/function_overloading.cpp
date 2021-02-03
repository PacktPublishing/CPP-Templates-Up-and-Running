#include <iostream>
#include <string.h>

size_t size_of(int x)
{
    return sizeof(x);
}

size_t size_of(double x)
{
    return sizeof(x);
}

size_t size_of(const char *str)
{
    return strlen(str);
}

int main()
{
    std::cout << size_of(10) << std::endl;
    std::cout << size_of(4.2) << std::endl;
    std::cout << size_of("Hello World!") << std::endl;

    return 0;
}
