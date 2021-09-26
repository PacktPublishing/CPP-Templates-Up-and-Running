#include <iostream>
#include <string.h>

template<typename T, typename U, typename V>
class Example {
public:
    void func() {std::cout << "Primary Template" << std::endl;}
};

template<typename U, typename V>
class Example<char, U, V> {
public:
    void func() {std::cout << "Partial Specialization for T = char" << std::endl;}
};
