#include "class_template_specialization.h"
int main()
{
    Storage<int> s(10);
    s.add_to_storage(20);
    s.print_storage();

    Storage<char *> s2(3);
    s2.add_to_storage(const_cast<char *>("John"));
    s2.add_to_storage(const_cast<char *>("Ashis"));
    s2.add_to_storage(const_cast<char *>("Kelvin"));
    s2.add_to_storage(const_cast<char *>("Joe"));
    s2.print_storage();

    return 0;
}
