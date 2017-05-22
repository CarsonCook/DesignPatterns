#ifndef command_hh
#define command_hh

class Bulb //receiver
{
public:
    void turnOn();
    void turnOff();
};

class Command
{
public:
    Command(Bulb bulb);
    virtual ~Command(){};
    virtual void undo()=0;
    virtual void redo()=0;
    virtual void execute()=0;
    Bulb getBulb();
private:
    Bulb mBulb;
};

class TurnOn : public Command
{
public:
    TurnOn(Bulb bulb);
    void undo();
    void redo();
    void execute();
};

class TurnOff : public Command
{
public:
    TurnOff(Bulb bulb);
    void undo();
    void redo();
    void execute();
};

class Control
{
public:
    void submit(Command* command);
    void undo(Command* command);
    void redo(Command* command);
};

#endif // command_hh
