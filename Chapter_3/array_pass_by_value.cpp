#include <iostream>
template<typename T>
void process_array(const T store, size_t len)
{
#if 0
    for(size_t index = 0; index < len; ++index) {
        store[index] = 100;
    }
    for(size_t index = 0; index < len; ++index)
        std::cout << store[index] << " ";
    std::cout << "\n";
#endif 
    *store = 100;
    len = 20;
    std::cout << *store << std::endl;
}

int main()
{
    //int mystore[] = {10, 20, 30, 40};
    int x = 10;
    int * ptr = &x;
    process_array(ptr, 4);
 
   return 0;
}
