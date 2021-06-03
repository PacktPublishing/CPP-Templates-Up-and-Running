#include <iostream>
class NonDep {
public:
    NonDep(int);
    void welcome();
    virtual ~NonDep();
protected:
    int val;
};

NonDep::NonDep(int x) : val(x) {}
void NonDep::welcome() {std::cout << "Hello World" << std::endl;}
NonDep::~NonDep() {}
