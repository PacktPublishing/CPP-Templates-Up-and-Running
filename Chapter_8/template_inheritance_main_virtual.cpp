#include <iostream>
#include "template_derived_virtual.h"
int main()
{
    Derived<int> d1(10);
    d1.welcome();
    d1.print_derived();

    Derived<int> d2(20);

    return 0;
}

