#ifndef decorator_hh
#define decorator_hh

#include <string>

class ICoffee
{
public:
    virtual int getCost()=0;
    virtual std::string getType()=0;
    virtual void printCoffee()=0;
};

class Coffee : public ICoffee
{
public:
    int getCost();
    std::string getType();
    void printCoffee();
};

class MilkCoffee : public ICoffee //decorator
{
public:
    MilkCoffee(Coffee c);
    int getCost();
    std::string getType();
    void printCoffee();
private:
    Coffee mCoffee;
};

class WhipCreamCoffee : public ICoffee
{
public:
    WhipCreamCoffee(Coffee c);
    int getCost();
    std::string getType();
    void printCoffee();
private:
    Coffee mCoffee;
};

#endif // decorator_hh
