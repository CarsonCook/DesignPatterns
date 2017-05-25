#ifndef flyweight_hh
#define flyweight_hh

#include <map>
#include <string>

class Tea{};
class ChaiTea:public Tea{};
class MintTea:public Tea{};

class TeaMaker
{
public:
    ~TeaMaker();
    Tea* make(std::string preference);
private:
    std::map<std::string,Tea*> mTeas;
};

class TeaShop
{
public:
    TeaShop(TeaMaker teaMaker);
    void takeOrder(std::string order, int tableNum);
    void serve();
private:
    std::map<int,Tea*> mOrders;
    TeaMaker mTeaMaker;
};

#endif
