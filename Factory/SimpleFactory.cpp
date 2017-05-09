#include <string>
#include <iostream>
#include "SimpleFactory.hh"

Door* DoorFactory::makeDoor(float width, float height)
{
    if (width<=0)
    {
        std::cout << "Bad width, returning with width as 1!" << std::endl;
        width=1;
        return NULL;
    }
    if (height<=0)
    {
        std::cout << "Bad height, returning with height as 1!" << std::endl;
        height=1;
    }
    return (new Door(width,height));
}

Door::Door(float width, float height)
{
    mWidth=width;
    mHeight=height;
}

void Door::setWidth(float width)
{
    mWidth=width;
}

void Door::setHeight(float height)
{
    mHeight=height;
}

float Door::getWidth()
{
    return mWidth;
}

float Door::getHeight()
{
    return mHeight;
}
