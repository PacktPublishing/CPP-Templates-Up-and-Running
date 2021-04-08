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
