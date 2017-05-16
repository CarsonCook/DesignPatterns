#ifndef AbstractFactory_hh
#define AbstractFactory_hh

#include <string>

class DoorFittingExpert
{
public:
    virtual ~DoorFittingExpert(){};
    virtual std::string getType()=0;
};

class Welder:public DoorFittingExpert
{
public:
    std::string getType();
};

class Carpenter:public DoorFittingExpert
{
public:
    std::string getType();
};

class AbstractDoor
{
public:
    virtual ~AbstractDoor(){};
    virtual std::string getType()=0;
};

class WoodenDoor:public AbstractDoor
{
public:
    std::string getType();
};

class IronDoor:public AbstractDoor
{
public:
    std::string getType();
};

class AbstractDoorFactory
{
public:
    virtual ~AbstractDoorFactory(){};
    virtual AbstractDoor* makeDoor()=0;
    virtual DoorFittingExpert* makeFittingExpert()=0;
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
