#include <iostream>
#include <algorithm>

int main()
{
    int min_of_int = std::min(100, 200);
    std::cout << "Min of 100 and 200 is " << min_of_int << std::endl;

    double min_of_double = std::min(4.5, 2.3);
    std::cout << "Min of 4.5 and 2.3 is " << min_of_double << std::endl;

    return 0;    
}
