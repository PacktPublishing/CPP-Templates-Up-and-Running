#include <iostream>
enum myenum {
    ONE = 1,
    TWO = 2,
    THREE =3
};

template <myenum val> //pointer to object
void f()
{
   std::cout << val << std::endl;
}

int main()
{
    f<1>();
    return 0;
}
