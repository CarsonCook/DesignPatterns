#include "mediator.hh"
#include <string>
#include <iostream>

void ChatMediator::sendMessage(User* user,std::string message)
{
    std::cout << user->getName() << ": " << message << std::endl;
}

User::User(std::string name, ChatMediator mediator)
{
    mName=name;
    mMediator=mediator;
}

void User::send(std::string message)
{
    mMediator.sendMessage(this,message);
}

std::string User::getName()
{
    return mName;
}
