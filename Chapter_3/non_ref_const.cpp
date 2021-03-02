#include <iostream>

template<typename T>
void mytemplate(const T var)
{
    *var = 100;
}

int main()
{
    //const int * const ptr;
    int * ptr;
    mytemplate(ptr);

    return 0;
}
