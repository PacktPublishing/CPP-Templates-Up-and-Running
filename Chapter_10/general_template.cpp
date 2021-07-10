#include<iostream>
#include "general_template.h"
int main()
{
    std::cout << size_of(10) << std::endl;
    std::cout << size_of(4.2) << std::endl;
    std::cout << size_of("Hello World!") << std::endl;

    return 0;
}

