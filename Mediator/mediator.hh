#ifndef mediator_hh
#define mediator_hh

#include <string>

class User;

class ChatMediator
{
public:
    void sendMessage(User* user, std::string message);
};

class User
{
public:
    User(std::string name, ChatMediator mediator);
    void send(std::string message);
    std::string getName();
private:
    std::string mName;
    ChatMediator mMediator;
};

#endif // mediator_hh
