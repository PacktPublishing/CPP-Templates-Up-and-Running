#include "sample_template_declaration.h"
template<typename T>
MyTemplate<T>::MyTemplate(T x) : val(x)
{
}

template<typename T>
T MyTemplate<T>::get_val()
{
    return val;
}

template class MyTemplate<int>;
template class MyTemplate<char>; 
