#include "sample_template_declaration.h"

int main()
{
    MyTemplate<int> myObj(10);
    myObj.get_val();
    MyTemplate<char> myObj2('A');
    myObj2.get_val();
    
    return 0;
}
