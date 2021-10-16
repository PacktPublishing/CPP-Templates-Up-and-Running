#include <iostream>
template<typename T>
void process_array(const T& store)
{
    for(size_t index = 0; index < sizeof(store)/sizeof(store[0]); ++index)
        store[index] = 100;
}

int main()
{
    int myarray[] = {10, 20, 30, 40};
    process_array(myarray);

    return 0;
}
