#include <iostream>
#include "composite.hh"

using namespace std;

int main()
{
    Designer* des=new Designer("Bob",50000);
    Developer* dev=new Developer("Carson",1000000);
    Business* bus=new Business();
    bus->addEmployee(des);
    bus->addEmployee(dev);
    bus->printEmployees();
    cout << "Net salaries: " << bus->getNetSalaries() << endl;
    delete bus;//deconstructor also deletes des and dev
    return 0;
}
