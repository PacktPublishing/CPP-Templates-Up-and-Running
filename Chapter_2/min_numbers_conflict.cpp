#include <iostream>
using namespace std;

template<class T> 
const T& min(const T& a, const T& b)
{
    return (b < a) ? b : a;
}

int main()
{
    int min_of_int = min(100, 200);
    std::cout << "Min of 100 and 200 is " << min_of_int << std::endl;

    return 0;    
}
