#include "non_dep_derived.h"
int main()
{
    Dep<int> d(20);
    d.print_val();
    return 0;
}

