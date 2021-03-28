#include <iostream>
int max(int x, int y)
{
    printf("Non-template version called.\n");
    return x > y ? 1 : 0;
}

template<typename T>
T max(T x, T y)
{
    printf("Template version called.\n");
    return x > y ? 1 : 0;
}

int main()
{
    int a = 10, b = 20;
    auto ret = max(a, b) ? " bigger" : " smaller";
    if(ret) 
        std::cout << "a is bigger " << std::endl;
    else 
        std::cout << "b is bigger" << std::endl;
    return 0;
}

