#include<iostream>
#include "explicit_instantiation.h"
void foo();

int main()
{
    std::cout << add(10, 20) << std::endl;
    foo();

    return 0;
}
