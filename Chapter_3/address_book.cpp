/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

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
