#include <iostream>
#include<cstdlib>
#include <unistd.h>
int get_dummy_process_output()
{
    sleep(1);
    srand((unsigned) time(NULL));
    int random = rand() % 10;
    return random; 
}
template<typename T, typename U>
std::common_type_t<T, U> get_some_value(T x, U y)
{
    if(get_dummy_process_output() < 5) 
        return x;
    else 
        return y;
}

int main()
{
    for( auto i=0; i < 5; ++i)
        std::cout << get_some_value(10, 200.56) << std::endl;
    return 0;
}
