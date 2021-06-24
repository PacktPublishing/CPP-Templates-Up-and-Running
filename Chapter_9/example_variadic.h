#ifndef __EXAMPLE_VARIADIC_H__ 
void printEmployee()
{
}

template<typename first, typename... rest>
void printEmployee(first arg, rest... argPack)
{
    std::cout << arg;
    printEmployee(argPack...);
}
#endif //__EXAMPLE_VARIADIC_H__
