#include <iostream>
#include <string>

std::string mystr;
template<std::string& str>
auto get_str_len()
{
    auto len = str.length();

    return len;
}

int main()
{
    mystr = "Hello World";
    std::cout << "Length of mystr = " << get_str_len<mystr>() << std::endl;

    return 0;
}
