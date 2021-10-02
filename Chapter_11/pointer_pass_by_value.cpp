#include <iostream>
template<typename T>
void foo(const T ptr)
{
    *ptr  =100;
}

int main()
{
    int var = 10;
    foo(&var);
    
    return 0;
}
