/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#ifndef __LOGGER_TEMPLATE_CLASS__
#define __LOGGER_TEMPLATE_CLASS__
#include <iostream>
#include <iomanip>

template<typename T>
class Logger {
public:
    Logger() = default;
    void operator () (const T&);
    ~Logger() = default;
};

template<typename T>
void Logger<T>::operator()(const T& val)
{
    std::cout << __FILE__ << ":" << __LINE__ << " " << val << std::endl;
}
#endif
