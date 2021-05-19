#include "template_base_class.h"
template<typename T>
class Derived : public Base<T>
{
public:
    using Base<T>::data;
    Derived(T x);
    void print_derived();
private:
};

template<typename T>
Derived<T>::Derived(T x) : Base(x) {}

template<typename T>
void Derived<T>::print_derived()
{

    std::cout << " data " << data << std::endl;
}
