#ifndef door_hh
#define door_hh

#include <string>
class DoorBuilder;

class Door
{
public:
    Door(DoorBuilder*);
    void printDoor();

private:
    int mHeight, mWidth;
    std::string mHingeMetal, mLockType;
};


#endif // door_hh
