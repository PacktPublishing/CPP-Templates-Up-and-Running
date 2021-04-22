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
#endif 
