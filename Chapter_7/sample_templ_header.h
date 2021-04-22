#ifndef __SAMPLE_TEMPL_HEADER__
#define __SAMPLE_TEMPL_HEADER__
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
MyTemplate<T>::MyTemplate(T x) : val(x) {}

template<typename T>
T MyTemplate<T>::get_val() { return val;}
#endif 
