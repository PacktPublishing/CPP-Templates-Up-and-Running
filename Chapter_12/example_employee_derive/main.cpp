/*
#include "developer.h"
int main()
{
    DeveloperClass d;
    d.SetName(std::string("Alan"));
    d.SetEmplyeeId(100);
    std::cout << "Developer Name: " << d.GetEmployeeName() << std::endl;
    std::cout << "Developer Id: " << d.GetEmployeeId() << std::endl;
    d.DevelopSoftware();
    d.TestSoftware();
    d.DeploySoftware();
    return 0;
}
*/
#include "manager.h"
int main()
{
    ManagerClass m;
    m.SetName(std::string("Alan"));
    m.SetEmplyeeId(100);
    std::cout << "Developer Name: " << m.GetEmployeeName() << std::endl;
    std::cout << "Developer Id: " << m.GetEmployeeId() << std::endl;
    m.ManageTeam();
    m.AllocateResources();
    m.AllocateBudget();

    return 0;
}
