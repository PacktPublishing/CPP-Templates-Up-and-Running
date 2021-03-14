#include <iostream>
#include <string.h>
const int max_size = 32;
template<typename T>
T* my_alloc_factory()
{
    return new T[max_size];
}

int main()
{
    char *myPtr = my_alloc_factory();
    strncpy(myPtr, "Hello World", max_size);
    std::cout << myPtr << std::endl;
    delete[] myPtr;
    return 0;
}
