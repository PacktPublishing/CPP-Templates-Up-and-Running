#include <iostream>
#include <string.h>

char name[256];
template<char * str>
void print_str()
{
    std::cout << str << std::endl;
}

int main()
{
    strcpy(name, "Hello World");
    print_str<name>();

    return 0;
}
