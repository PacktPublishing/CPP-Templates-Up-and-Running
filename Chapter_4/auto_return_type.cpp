#include <iostream>
template<typename T>
auto get_coef(T type)
{
    auto ret = 0.0;
    switch(type) {
    case 1:
        ret = 20.5;
        break;
    case 2:
        ret = 100.50;
        break;
    default:
        ret = 200.3;
    }
    return ret;
}

int main()
{
    int type = 2;
    std::cout << get_coef(type) << std::endl;
    return 0;
}

