#include <iostream>
template<typename T, typename U>
U get_coef(T type)
{
    std::cout << type << std::endl;
    U ret;
    switch(type) {
    case 1:
        ret = 20.5;
        break;
    case 2:
        ret = 100.5;
        break;
    default:
        ret = 10.4;
    }
    return ret;
}

int main()
{
    int type = 2;
    std::cout << get_coef<double>(type) << std::endl;
    return 0;
}

