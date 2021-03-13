#include <iostream> 
template <typename T>
auto select_band(T x)
{
    return (x > 0 && x < 100) ? 1 : 2;
}

int main()
{
    std::cout << select_band(100) << std::endl;
    return 0;
}
