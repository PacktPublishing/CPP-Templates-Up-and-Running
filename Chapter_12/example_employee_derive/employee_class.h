#include <iostream>

class EmployeeClass {
public:
    EmployeeClass();
    void SetName(std::string);
    std::string GetEmployeeName();
    void SetEmplyeeId(int);
    int GetEmployeeId();
    ~EmployeeClass();
private:
    std::string employee_name{""};
    int employee_id{0};
};
