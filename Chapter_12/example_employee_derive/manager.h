#include "employee_class.h"
class ManagerClass : public EmployeeClass
{
public: 
    ManagerClass();
    void ManageTeam();
    void AllocateResources();
    void AllocateBudget();
    ~ManagerClass();
};
