#ifndef prototype_hh
#define prototype_hh

class Door
{
public:
    Door(int width,int height);
    Door* clone();
    void setHeight(int);
    void setWidth(int);
    void printDoor();

private:
    Door(Door*);
    int mHeight, mWidth;
};

#endif // prototype_hh
