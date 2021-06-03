#include "non_dep_base.h"
template<typename T>
class Dep : public NonDep {
public:
    Dep(T);
    void print_val();
    ~Dep();
private:

};

template<typename T>
Dep<T>::Dep(T x) : NonDep(x) {}

template<typename T>
void Dep<T>::print_val() { std::cout << "val = " << val << std::endl;}

template<typename T>
Dep<T>::~Dep() {}
