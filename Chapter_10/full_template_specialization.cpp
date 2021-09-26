#include "full_template_specialization.h"

int main()
{
    Example<int, char, double> e;
    e.func();

    return 0;
}
