#include <iostream>
#include "facade.hh"

using namespace std;

int main()
{
    Computer c;
    ComputerFacade cf(c);
    cf.turnOn();
    cout << "****" << endl;
    cf.turnOff();
    return 0;
}
