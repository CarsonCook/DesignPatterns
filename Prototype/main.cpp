#include <iostream>
#include "prototype.hh"

using namespace std;

int main()
{
    Door* normalDoor=new Door(1,2);
    normalDoor->printDoor();
    Door* bigDoor=normalDoor->clone();
    bigDoor->setHeight(3);
    bigDoor->setWidth(2);
    bigDoor->printDoor();
    delete normalDoor; delete bigDoor;
    return 0;
}
