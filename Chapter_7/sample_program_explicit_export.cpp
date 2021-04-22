#include "sample_template_declaration.h"
extern template class MyTemplate<int>;
extern template class MyTemplate<char>;

int main()
{
    MyTemplate<int> myObj(10);
    myObj.get_val();
    MyTemplate<char> myObj2('A');
    myObj2.get_val();
    
    return 0;
}
