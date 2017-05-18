#include <iostream>
#include "adaptor.hh"

void WildDog::bark()
{
    std::cout << " woof " << std::endl;
}

void AsianLion::roar()
{
    std::cout << " rawr " << std::endl;
}

void AfricanLion::roar()
{
    std::cout << " ROAR " << std::endl;
}

void Hunter::hunt(Lion* l)
{
    std::cout << "hunting..." << std::endl;
    l->roar();
}

WildDogAdaptor::WildDogAdaptor(WildDog* d)
{
    mDog=d;
}

void WildDogAdaptor::roar()
{
    mDog->bark();
}
