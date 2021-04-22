#include "sample_templ_header.h"
extern template class MyTemplate<int>;
extern template class MyTemplate<char>;

int main()
{
    MyTemplate<int> obj1(10);
    MyTemplate<char> obj2('A');

    return 0;
}
