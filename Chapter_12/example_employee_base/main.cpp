#include "employee_class.h"
int main()
{
    EmployeeClass e;
    e.SetName(std::string("Alan"));
    e.SetEmplyeeId(100);
    std::cout << "Employee Name: " << e.GetEmployeeName() << std::endl;
    std::cout << "Employee Id: " << e.GetEmployeeId() << std::endl;

    return 0;
}
