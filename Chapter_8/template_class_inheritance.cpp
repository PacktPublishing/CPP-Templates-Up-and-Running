#include <iostream>

template<typename T>
class Base {
public:
    Base(T x);
    virtual ~Base();
protected:
    T data;
};

template<typename T>
Base<T>::Base(T x) : data(x) {}

template<typename T>
Base<T>::~Base() {}

template<typename T>
class Derived : public Base<T>
{
public:
    using Base<T>::data;
    Derived(T x);
    void print();
private:
};

template<typename T>
Derived<T>::Derived(T x) : Base<T>::Base(x) {}

template<typename T>
void Derived<T>::print()
{

    std::cout << " data " << data << std::endl;}

int main()
{
    Derived<int> d1(10);
    d1.print();

    return 0;
}

