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
#include <iomanip>
#include "Logger_template_class.h"

int main()
{
    Logger<int> logger_i;
    logger_i(10);

    Logger<double> logger_d;
    logger_d(50.9);

    Logger<const char *> logger_char;
    logger_char("John Grisham");

    Logger<std::string> logger_s;
    logger_s("Hello World");

    return 0;
}

