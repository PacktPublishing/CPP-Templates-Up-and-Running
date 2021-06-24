#ifndef __PARAMETER_DEMO__
void printNum()
{
}
template<typename first, typename... rest>
void printNum(first arg, rest... restArgs)
{
    std::cout << arg << ' ';
    printNum(restArgs...);
}
#endif 
