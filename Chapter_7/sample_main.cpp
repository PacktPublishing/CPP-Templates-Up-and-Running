#include "sample_templ_undef_header.h"
extern template class MyTemplate<int>;
extern template class MyTemplate<char>;

int main()
{
    MyTemplate<int> obj1(10);
    obj1.print_val();
    MyTemplate<char> obj2('A');

    return 0;
}
