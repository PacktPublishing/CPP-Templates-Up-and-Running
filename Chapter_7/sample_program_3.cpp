#include "sample_template.h"

int main()
{
    MyTemplate<int> myObj(10);
    std::cout << "val = " << myObj.get_val() << std::endl;

    return 0;
}
