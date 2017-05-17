#include <iostream>
#include "prototype.hh"

Door::Door(int width, int height)
{
    mWidth=width;
    mHeight=height;
}

Door::Door(Door* d)
{
    mWidth=d->mWidth;
    mHeight=d->mHeight;
}

Door* Door::clone()
{
    return new Door(this);

}

void Door::setHeight(int height)
{
    mHeight=height;
}

void Door::setWidth(int width)
{
    mWidth=width;
}

void Door::printDoor()
{
    std::cout << mWidth << "x" << mHeight << std::endl;
}
