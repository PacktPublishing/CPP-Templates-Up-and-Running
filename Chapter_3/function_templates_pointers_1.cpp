#include <iostream>
template<typename T>
void set_value(const T* var)
{
    if(var) 
    {
        *var = 100;
    }
}

int main()
{
    int myvar = 0;
    set_value(&myvar);
    std::cout << "Value at myvar = " << myvar << std::endl;

    return 0;
}
