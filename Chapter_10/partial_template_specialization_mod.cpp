#include "partial_template_specialization.h"

int main()
{
    Example<int, int, double> e;
    e.func();

    return 0;
}
