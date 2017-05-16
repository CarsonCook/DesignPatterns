#include <string>
#include <iostream>
#include "builder.hh"
#include "door.hh"

Door::Door(DoorBuilder* db)
{
    mHingeMetal=db->getHingeMetal();
    mLockType=db->getLockType();
    mHeight=db->getHeight();
    mWidth=db->getWidth();
}

void Door::printDoor()
{
    std::cout << mHeight << "x" << mWidth << " " << mLockType << " " << mHingeMetal << std::endl;
}

DoorBuilder* DoorBuilder::setHingeMetal(std::string hingeMetal)
{
    mHingeMetal=hingeMetal;
    return this;
}

DoorBuilder* DoorBuilder::setLockType(std::string lockType)
{
    mLockType=lockType;
    return this;
}

int DoorBuilder::getHeight()
{
    return mHeight;
}

int DoorBuilder::getWidth()
{
    return mWidth;
}

std::string DoorBuilder::getHingeMetal()
{
    return mHingeMetal;
}

std::string DoorBuilder::getLockType()
{
    return mLockType;
}

Door* DoorBuilder::build()
{
    return new Door(this);
}

DoorBuilder::DoorBuilder(int height,int width)
{
    mHeight=height;
    mWidth=width;
}
