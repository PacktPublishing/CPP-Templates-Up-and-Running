#ifndef __SAMPLE_TEMPLATE_IMPLICIT__
#define __SAMPLE_TEMPLATE_IMPLICIT__
#include <iostream>
template<typename T>
class MyTemplate {
    public:
        MyTemplate() = default;
        MyTemplate(T x);
        void print_val();
        ~MyTemplate() = default;
    private:
        T val;
};

template<typename T>
MyTemplate<T>::MyTemplate(T x) : val(x) {}

template<typename T>
void MyTemplate<T>::print_val()
{
    std::cout << val << std::endl;
}
#endif 
