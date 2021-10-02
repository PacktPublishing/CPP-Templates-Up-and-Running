#include <iostream>
#include <string.h>
#include <malloc.h>
char *ptr;
template<char * str>
void print_str()
{
    std::cout << str << std::endl;
}
int main()
{
    ptr = (char *) malloc(256 * sizeof(char));
    strcpy(ptr, "Hello World");
    print_str<ptr>();

    return 0;
}
