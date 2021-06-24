#include <iostream>
#include "example_variadic.h"

int main(void)
{
    printEmployee("Name = ", "John Smith", ", ",
                  "Age = ", 40, ", ",
                  "Job Title = ", "Sr. Editor PACKT", ", ",
                  "Salary = £", 800000.00,
                  "\n");
    return 0;
}
