#include "flyweight.hh"
#include <string>
#include <iostream>
#include <map>

TeaMaker::~TeaMaker()
{
    std::map<std::string, Tea*>::iterator it;
    for (it=mTeas.begin(); it!=mTeas.end(); it++ )
    {
        delete it->second; //delete each tea pointer
    }
}

Tea* TeaMaker::make(std::string preference)
{
    if (mTeas.count(preference)==0) //preference not in map mTeas
    {
        Tea* tea;
        if (preference=="mint")
        {
            tea=new MintTea();
        }
        else if (preference=="chai")
        {
            tea=new ChaiTea();
        }
        else
        {
            tea=new Tea();
        }
        mTeas.insert(std::pair<std::string,Tea*>(preference,tea));
    }
    return mTeas.at(preference);
}

TeaShop::TeaShop(TeaMaker teaMaker)
{
    mTeaMaker=teaMaker;
}

void TeaShop::takeOrder(std::string order,int tableNum)
{
    Tea* tea=mTeaMaker.make(order);
    mOrders.insert(std::pair<int,Tea*>(tableNum,tea));
}

void TeaShop::serve()
{
    std::map<int, Tea*>::iterator it;
    for (it=mOrders.begin(); it!=mOrders.end(); it++ )
    {
        std::cout << "Serving table " << it->first << std::endl;
    }
}
