#include "employee_class.h"
class ManagerClass : public EmployeeClass
{
public: 
    ManagerClass();
    void ManageEmployee();
    void AllocateResource();
    void AllocateBudget();
    ~ManagerClass();
}
