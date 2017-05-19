#include "composite.hh"
#include <string>
#include <iostream>

Employee::Employee(std::string name)
{
    mName=name;
}

void Employee::setName(std::string name)
{
    mName=name;
}

std::string Employee::getName()
{
    return mName;
}
