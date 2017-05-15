#include <string>
#include "AbstractFactory.hh"

DoorFittingExpert::DoorFittingExpert(std::string type)
{
    mType=type;
}

std::string DoorFittingExpert::getType()
{
    return mType;
}

AbstractDoor::AbstractDoor(std::string type)
{
    mType=type;
}

std::string AbstractDoor::getType()
{
    return mType;
}

AbstractDoor* AbstractDoorFactory::makeDoor()
{
    return new AbstractDoor("nothing");
}

DoorFittingExpert* AbstractDoorFactory::makeFittingExpert()
{
    return new DoorFittingExpert("nothing");
}

DoorFittingExpert* IronDoorFactory::makeFittingExpert()
{
    return new Welder();
}

AbstractDoor* WoodenDoorFactory::makeDoor()
{
    return new WoodenDoor();
}

DoorFittingExpert* WoodenDoorFactory::makeFittingExpert()
{
    return new Carpenter();
}
