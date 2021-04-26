#ifndef __SAMPLE_TEMPL_HEADER__
#define __SAMPLE_TEMPL_HEADER__
#include <iostream>
template<typename T>
class MyTemplate {
    public:
        MyTemplate() = default;
        MyTemplate(T x);
        T get_val();
        void print_val();
        ~MyTemplate() = default;
    private:
        T val;
};

template<typename T>
MyTemplate<T>::MyTemplate(T x) : val(x) {}

template<typename T>
T MyTemplate<T>::get_val() { return val;}

/*
template<typename T>
void MyTemplate<T>::print_val()
{
    std::cout << val << std::endl;
}
*/
#endif 
