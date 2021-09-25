#include "class_template.h"
int main()
{
    Storage<int> s(10);
    s.add_to_storage(20);
    s.add_to_storage(30);
    s.print_storage();

    return 0;
}

