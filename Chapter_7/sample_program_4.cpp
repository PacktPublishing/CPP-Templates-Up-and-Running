#include "sample_template.h"

int main()
{
    MyTemplate<int> myObj(10);
    myObj.print_welcome_message();
    std::cout << "val = " << myObj.get_val() << std::endl;

    return 0;
}
