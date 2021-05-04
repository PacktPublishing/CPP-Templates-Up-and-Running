#include <iostream>
#include "sample_header.h"
void foo_1();
void foo_2();
int main()
{
    std::cout << add(100, 200) << std::endl;
    foo_1();
    foo_2();
    return 0; 
}
