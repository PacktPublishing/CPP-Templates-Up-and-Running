#include <iostream>
template<void (*fnc)()>
void welcome_message()
{
    fnc();
}

void dymmy_welcome()
{
    std::cout << "Hello World" << std::endl;
}

int main()
{
    welcome_message<dymmy_welcome>();
    return 0;
}
