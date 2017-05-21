#ifndef proxy_hh

#include <string>

class Door
{
public:
    virtual void open()=0;
    virtual void close()=0;
    virtual ~Door(){};
};

class LabDoor: public Door
{
public:
    void open();
    void close();
};

class Security
{
public:
    Security(Door* door);
    void open(std::string password);
    void close();
private:
    bool authenticate(std::string password);
    Door* mDoor;
};

#endif // proxy_hh
