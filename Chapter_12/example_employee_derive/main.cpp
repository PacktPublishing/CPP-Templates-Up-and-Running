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
