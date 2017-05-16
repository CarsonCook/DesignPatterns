#include <string>
#include "AbstractFactory.hh"

std::string Welder::getType()
{
    return "welder";
}

std::string IronDoor::getType()
{
    return "iron door";
}

std::string Carpenter::getType()
{
    return "carpenter";
}

std::string WoodenDoor::getType()
{
    return "wooden door";
}

DoorFittingExpert* IronDoorFactory::makeFittingExpert()
{
    return new Welder();
}

AbstractDoor* IronDoorFactory::makeDoor()
{
    return new IronDoor();
}

AbstractDoor* WoodenDoorFactory::makeDoor()
{
    return new WoodenDoor();
}

DoorFittingExpert* WoodenDoorFactory::makeFittingExpert()
{
    return new Carpenter();
}
