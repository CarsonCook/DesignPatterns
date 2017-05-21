#include "proxy.hh"
#include <iostream>
#include <string>

void LabDoor::open()
{
    std::cout << "opening" << std::endl;
}

void LabDoor::close()
{
    std::cout << "closing" << std::endl;
}

Security::Security(Door* door)
{
    mDoor=door;
}

Security::~Security()
{
    delete mDoor;
}

void Security::open(std::string password)
{
    if (authenticate(password))
    {
        mDoor->open();
    }
    else
    {
        std::cout << "wrong password" << std::endl;
    }
}

void Security::close()
{
    mDoor->close();
}

bool Security::authenticate(std::string password)
{
    return password=="1234";
}
