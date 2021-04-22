#ifndef __SAMPLE_TEMPLATE_ERROR__
#define __SAMPLE_TEMPLATE_ERROR__
#include <iostream>
template<typename T>
class MyTemplate {
    public:
        MyTemplate() = default;
        void foo();
        ~MyTemplate() = default;
    private:
};

template<typename T>
void MyTemplate<T>::foo()
{
    int var = 10;
    std::cout << var
}
#endif 
