#include <iostream>
#include "decorator.hh"

using namespace std;

int main()
{
    Coffee c;
    MilkCoffee mc(c);
    WhipCreamCoffee wc(c);
    mc.printCoffee();
    wc.printCoffee();
    c.printCoffee(); //c wasn't changed by the decorator classes!
    return 0;
}
