#include <iostream>
#include <string.h>
template<size_t N, typename T>
T* dynamic_allocator(T val)
{
    std::cout << "Value of N = " << N << std::endl;
    T *mem = new T[N];
    for (size_t index = 0; index < N; ++index)
        mem[index] = val;
    return mem;
}
int main()
{
    const size_t len = 10;
    auto iptr = dynamic_allocator<len>(5);
    for (size_t index = 0; index < len; ++index)
        std::cout << iptr[index] << " ";
    std::cout << "\n";

    auto dptr = dynamic_allocator<5>(20.7);
    for (size_t index = 0; index < 5; ++index)
        std::cout << dptr[index] << " ";
    std::cout << "\n";

    const size_t len3 = 3;
    auto cptr = dynamic_allocator<len3>('C');
    for (size_t index = 0; index < len3; ++index)
        std::cout << cptr[index] << " ";
    std::cout << "\n";
    delete [] iptr;
    delete [] dptr;
    delete [] cptr;
    return 0;
}
