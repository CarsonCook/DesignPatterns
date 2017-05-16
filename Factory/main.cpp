#include <iostream>
#include "SimpleFactory.hh"
#include "FactoryMethod.hh"
#include "AbstractFactory.hh"

using namespace std;

int main()
{
    //Door* simpleDoor=DoorFactory::makeDoor(1,2);
    //cout << simpleDoor->getWidth() << "x" << simpleDoor->getHeight() << " dimensions for simple door" << endl;

    /*Developer d;
    DevManager* dvm=new DevManager("Carson",d);
    dvm->takeInterview();
    QaLead qal;
    QaManager* qam=new QaManager("bob",qal);
    qam->takeInterview();
    delete qam;
    delete dvm;*/

    WoodenDoorFactory* wf=new WoodenDoorFactory();
    IronDoorFactory* idf=new IronDoorFactory();
    //calling code knows type being returned
    Carpenter* c=(Carpenter*)wf->makeFittingExpert();
    Welder* w=(Welder*)idf->makeFittingExpert();
    WoodenDoor* wd=(WoodenDoor*)wf->makeDoor();
    IronDoor* id=(IronDoor*)idf->makeDoor();
    cout << c->getType() << " " << w->getType() << " " << wd->getType() << " " << id->getType() << endl;

    //but also can keep it general to avoid knowing what is returned --> same funcitonality!
    DoorFittingExpert* de1=wf->makeFittingExpert();
    DoorFittingExpert* de2=idf->makeFittingExpert();
    AbstractDoor* ad1=wf->makeDoor();
    AbstractDoor* ad2=idf->makeDoor();
    cout << de1->getType() << " " << de2->getType() << " " << ad1->getType() << " " << ad2->getType() << endl;

    delete wf; delete idf; delete c; delete w; delete wd; delete id; delete de1; delete de2; delete ad1; delete ad2;
    return 0;
}
