#include <iostream>

template<typename T>
T abs(T myvar)
{
    return myvar > 0 ? myvar : (-myvar);
}

int main()
{
    double dVar = -20.5;
    std::cout << abs(dVar) << std::endl;
    int iVar = 10;
    std::cout << abs<>(iVar) << std::endl;
    char cVar = 'A';
    std::cout << abs(cVar) << std::endl;

    return 0;
}
