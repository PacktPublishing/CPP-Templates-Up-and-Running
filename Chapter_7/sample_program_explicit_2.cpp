#include "sample_template_explicit.h"
extern void foo();
int main()
{
    MyTemplate<int> myObj2(20);
    myObj2.print_val();
    foo();

    return 0;
}
