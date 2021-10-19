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
