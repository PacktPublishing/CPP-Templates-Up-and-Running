#include <iostream>
void printEmployee()
{
}

template<typename first, typename... rest>
void printEmployee(first arg, rest... argPack)
{
    std::cout << arg;
    printEmployee(argPack...);
}

int main(void)
{
    printEmployee("Name = ", "John Smith", ", ",
                  "Age = ", 40, ", ",
                  "Job Title = ", "Sr. Editor PACKT", ", ",
                  "Salary = $", 800000.00,
                  "\n");
}
