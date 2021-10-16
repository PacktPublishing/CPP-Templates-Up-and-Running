#include "employee_class.h"
EmployeeClass::EmployeeClass()
{
    // not much to do in constructor for this example
}

void EmployeeClass::SetName(std::string name)
{
    employee_name = name;
}
std::string EmployeeClass::GetEmployeeName()
{
    return employee_name;
}
void EmployeeClass::SetEmplyeeId(int id)
{
    employee_id = id;
}
int EmployeeClass::GetEmployeeId()
{
    return employee_id;
}

EmployeeClass::~EmployeeClass()
{
    // not much to do in destructor for this example
}
