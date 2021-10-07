#include <iostream>
template<typename T>
void process_array(const T store, size_t len)
{
    store = new int;
    for(size_t index = 0; index < len; ++index) {
        store[index] = 100;
    }
    for(size_t index = 0; index < len; ++index)
        std::cout << store[index] << " ";
    std::cout << "\n";
}

int main()
{
    int mystore[] = {10, 20, 30, 40};
    process_array(mystore, 4);
 
   return 0;
}
