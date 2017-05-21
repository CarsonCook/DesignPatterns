#include "facade.hh"
#include <iostream>

void Computer::makeSound()
{
    std::cout << "beep" << std::endl;
}

void Computer::notifyReady()
{
    std::cout << "ready!" << std::endl;
}

void Computer::sleep()
{
    std::cout << "zzz" << std::endl;
}

void Computer::closeAll()
{
    std::cout << "everything is closed" << std::endl;
}

void Computer::showLoading()
{
    std::cout << "loading..." << std::endl;
}

ComputerFacade::ComputerFacade(Computer computer)
{
    mComputer=computer;
}

void ComputerFacade::turnOn()
{
    mComputer.makeSound();
    mComputer.showLoading();
    mComputer.notifyReady();
}

void ComputerFacade::turnOff()
{
    mComputer.closeAll();
    mComputer.sleep();
}
