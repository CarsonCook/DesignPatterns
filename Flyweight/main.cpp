#include <iostream>
#include "flyweight.hh"

using namespace std;

int main()
{
    TeaMaker maker;
    TeaShop shop(maker);
    shop.takeOrder("chai",1);
    shop.takeOrder("mint",2);
    shop.takeOrder("tea",3);
    shop.serve();
    return 0;
}
