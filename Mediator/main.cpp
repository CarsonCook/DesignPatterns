#include <iostream>
#include "mediator.hh"

using namespace std;

int main()
{
    ChatMediator room1;
    User* carson=new User("carson",room1);
    User* doug=new User("doug",room1);
    carson->send("hey");
    doug->send("hi carson");
    delete carson; delete doug;
    return 0;
}
