#include "proxy.hh"
#include <iostream>

using namespace std;

int main()
{
    Security* secureDoor=new Security(new LabDoor());
    secureDoor->open("1235");
    secureDoor->open("1234");
    secureDoor->close();
    delete secureDoor;
    return 0;
}
