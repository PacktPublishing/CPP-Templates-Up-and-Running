#include <iostream>
template<typename T>
void set_value(T var)
{
    if(var) {
        *var = 100;
    }
}
int main()
{
    int * myptr = nullptr;
    set_value(myptr);

    if(myptr)
     std::cout << "Value at myptr = " << *myptr << std::endl;
    else
     std::cout << "ERROR: myptr pointer is not initialized yet!" << std::endl;

    myptr = new int;
    set_value(myptr);
    if(myptr)
     std::cout << "Value at myptr = " << *myptr << std::endl;
    else
     std::cout << "ERROR: myptr pointer is not initialized yet!" << std::endl;

    delete myptr;
    return 0;
}
