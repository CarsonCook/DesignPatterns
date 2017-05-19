#include "decorator.hh"
#include <string>
#include <iostream>

int Coffee::getCost()
{
    return 3;
}

std::string Coffee::getType()
{
    return "coffee";
}

void Coffee::printCoffee()
{
    std::cout << getType() << " for " << getCost() << std::endl;
}

MilkCoffee::MilkCoffee(Coffee c)
{
    mCoffee=c;
}

int MilkCoffee::getCost()
{
    return mCoffee.getCost()+1;
}

std::string MilkCoffee::getType()
{
    return mCoffee.getType()+" with milk";
}

void MilkCoffee::printCoffee()
{
    std::cout << getType() << " for " << getCost() << std::endl;
}

WhipCreamCoffee::WhipCreamCoffee(Coffee c)
{
    mCoffee=c;
}

int WhipCreamCoffee::getCost()
{
    return mCoffee.getCost()+2;
}

std::string WhipCreamCoffee::getType()
{
    return mCoffee.getType()+" with whipped cream";
}

void WhipCreamCoffee::printCoffee()
{
    std::cout << getType() << " for " << getCost() << std::endl;
}
