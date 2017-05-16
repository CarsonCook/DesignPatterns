#ifndef builder_hh
#define builder_hh

#include "door.hh"

#include <string>

class DoorBuilder
{
public:
    DoorBuilder(int height, int width);
    DoorBuilder* setHingeMetal(std::string);
    DoorBuilder* setLockType(std::string);
    int getHeight();
    int getWidth();
    std::string getHingeMetal();
    std::string getLockType();
    Door* build();

private:
    int mHeight, mWidth;
    std::string mHingeMetal, mLockType;
};


#endif // builder_hh
