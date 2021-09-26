#include <iostream>
#include <string.h>

template<typename T, typename U, typename V>
class Example {
public:
    void func() {std::cout << "Primary Template" << std::endl;}
};

template<>
class Example<int, char, double> {
public:
    void func() {std::cout << "Full Specialization" << std::endl;}
};
