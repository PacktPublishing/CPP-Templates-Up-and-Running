#include <iostream>
#include <map>
#include <utility>
#include <sstream>

std::multimap<std::string, std::string> addressbook;

template<typename T, typename U>
void add_data_to_store(T key, U data)
{
    std::ostringstream s; 
    s << data;
    addressbook.insert(std::make_pair(std::string(key), s.str()));
}

void display_store()
{
    for (auto m : addressbook)
        std::cout << m.first << " " << m.second << std::endl;
}

int main()
{
    add_data_to_store("John", 25);
    add_data_to_store("John", 1000.00);
    add_data_to_store("John", "74 Grisham Road");

    display_store();
    return 0;
}
