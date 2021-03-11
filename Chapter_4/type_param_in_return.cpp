#include <iostream>
template<typename T>
T increment(T& x)
{
    return ++x;
}
int main()
{
    double dval = 10.5;
    std::cout << "double incr = " << increment(dval) << std::endl;
    int ival = 20;
    std::cout << "int incr = " << increment(ival) << std::endl;
    return 0;
}
