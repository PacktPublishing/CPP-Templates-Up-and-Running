#ifndef __SAMPLE_TEMPLATE_2__
#define __SAMPLE_TEMPLATE_2__
#include <iostream>
template<typename T>
class MyTemplate {
    public:
        MyTemplate() = default;
        MyTemplate(T x);
        T get_val();
        ~MyTemplate() = default;
    private:
        T val;
};

template<typename T>
MyTemplate<T>::MyTemplate(T x) : val(x)
{
}

template<typename T>
T MyTemplate<T>::get_val()
{
    return val;
}
#endif 
