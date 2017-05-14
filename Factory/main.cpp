#include <iostream>
#include "SimpleFactory.hh"
#include "FactoryMethod.hh"
#include "AbstractFactory.hh"

using namespace std;

int main()
{
    //Door* simpleDoor=DoorFactory::makeDoor(1,2);
    //cout << simpleDoor->getWidth() << "x" << simpleDoor->getHeight() << " dimensions for simple door" << endl;

    Developer d;
    DevManager* dvm=new DevManager("Carson",d);
    dvm->takeInterview();
    QaLead qal;
    QaManager* qam=new QaManager("bob",qal);
    qam->takeInterview();
    delete qam;
    delete dvm;
    return 0;
}
