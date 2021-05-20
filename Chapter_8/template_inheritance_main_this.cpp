#include <iostream>
#include "template_derived_class_this.h"
int main()
{
    Derived<int> d1(10);
    d1.print_derived();

    return 0;
}

