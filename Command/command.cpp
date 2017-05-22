#include "command.hh"
#include <iostream>

void Bulb::turnOn()
{
    std::cout << "ON" << std::endl;
}

void Bulb::turnOff()
{
    std::cout << "OFF" << std::endl;
}

Command::Command(Bulb bulb)
{
    mBulb=bulb;
}

Bulb Command::getBulb()
{
    return mBulb;
}

TurnOn::TurnOn(Bulb bulb):Command(bulb){};

void TurnOn::execute()
{
    getBulb().turnOn();
}

void TurnOn::redo()
{
    getBulb().turnOn();
}

void TurnOn::undo()
{
    getBulb().turnOff();
}

TurnOff::TurnOff(Bulb bulb):Command(bulb){};

void TurnOff::execute()
{
    getBulb().turnOff();
}

void TurnOff::redo()
{
    getBulb().turnOff();
}

void TurnOff::undo()
{
    getBulb().turnOn();
}

void Control::submit(Command* command)
{
    command->execute();
}

void Control::undo(Command* command)
{
    command->undo();
}

void Control::redo(Command* command)
{
    command->redo();
}
