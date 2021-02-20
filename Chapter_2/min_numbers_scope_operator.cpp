#include <iostream>
using namespace std;

template<class T>
const T& min(const T& a, const T& b)
{
    return (b < a) ? b : a;
}

int main()
{
    double min_of_double = ::min(4.5, 2.3);
    std::cout << "Min of 4.5 and 2.3 is " << min_of_double << std::endl;

    return 0;
}

