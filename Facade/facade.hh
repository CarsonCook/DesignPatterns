#ifndef facade_hh
#define facade_hh

class Computer
{
public:
    void makeSound();
    void notifyReady();
    void sleep();
    void closeAll();
    void showLoading();
};

class ComputerFacade
{
public:
    ComputerFacade(Computer computer);
    void turnOn();
    void turnOff();
private:
    Computer mComputer;
};

#endif // facade_hh
