#include <iostream>
#include "builder.hh"
#include "door.hh"

using namespace std;

int main()
{
    Door* d=(new DoorBuilder(2,1))->setLockType("strong")->setHingeMetal("iron")->build();
    d->printDoor();
    delete d;
    return 0;
}
