#include <iostream>
#include "sample_header.h"
extern void foo_1();
extern void foo_2();
int main()
{
    std::cout << add(100, 200) << std::endl;
    foo_1();
    foo_2();
    return 0; 
}
