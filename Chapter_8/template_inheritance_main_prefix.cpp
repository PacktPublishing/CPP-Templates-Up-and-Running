#include <iostream>
#include "template_derived_class_prefix.h"
int main()
{
    Derived<int> d1(10);
    d1.print_base();

    return 0;
}

