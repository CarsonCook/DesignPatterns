#ifndef SimpleFactory_hh
#define SimpleFactory_hh

#include <string>

class Door
{
public:
    Door(float width, float height);

    void setWidth(float width);
    void setHeight(float height);

    float getWidth();
    float getHeight();

private:
    float mWidth, mHeight;
};

class DoorFactory
{
public:
    static Door* makeDoor(float width, float height);
};

#endif
