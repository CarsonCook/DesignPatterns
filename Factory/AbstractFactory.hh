#ifndef AbstractFactory_hh
#define AbstractFactory_hh

#include <string>

class DoorFittingExpert
{
public:
    DoorFittingExpert(std::string type);
    virtual ~DoorFittingExpert(){};
    virtual std::string getType();
private:
    std::string mType;
};

class Welder:public DoorFittingExpert
{
public:
    Welder():DoorFittingExpert("welder"){};
};

class Carpenter:public DoorFittingExpert
{
public:
    Carpenter():DoorFittingExpert("carpenter"){};
};

class AbstractDoor
{
public:
    AbstractDoor(std::string type);
    virtual ~AbstractDoor(){};
    virtual std::string getType();
private:
    std::string mType;
};

class WoodenDoor:public AbstractDoor
{
public:
    WoodenDoor():AbstractDoor("wooden"){};
};

class IronDoor:public AbstractDoor
{
public:
    IronDoor():AbstractDoor("iron"){};
};

class AbstractDoorFactory
{
public:
    virtual ~AbstractDoorFactory(){};
    virtual AbstractDoor* makeDoor();
    virtual DoorFittingExpert* makeFittingExpert();
};

class IronDoorFactory:public AbstractDoorFactory
{
public:
    AbstractDoor* makeDoor();
    DoorFittingExpert* makeFittingExpert();
};

class WoodenDoorFactory:public AbstractDoorFactory
{
public:
    AbstractDoor* makeDoor();
    DoorFittingExpert* makeFittingExpert();
};

#endif
