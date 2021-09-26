#include "partial_template_specialization.h"

int main()
{
    Example<char, int, double> e;
    e.func();

    return 0;
}
