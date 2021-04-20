#ifndef __SAMPLE_TEMPLATE_H__
#define __SAMPLE_TEMPLATE_H__
#include <iostream>
template<typename T>
class MyTemplate {
    private:
        T data;
    public:
        MyTemplate() = default;
        MyTemplate(T val);
        T get_val() const;
        ~MyTemplate() = default;
};

template<typename T>
MyTemplate<T>::MyTemplate(T val) : data(val)
{
}

template<typename T>
T MyTemplate<T>::get_val() const 
{
    return data;
}

#endif 


