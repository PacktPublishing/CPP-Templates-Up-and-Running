#include <iostream>

struct mystruct {
    int a;
};

template<typename T>
void foo(T& s)
{
    std::cout << s.a << std::endl;
    std::cout << s.b << std::endl;
}

int main()
{
    struct mystruct s{10};
    std::cout << s.a << std::endl;
    foo(s);
    
    return 0;    
}
