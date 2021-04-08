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

