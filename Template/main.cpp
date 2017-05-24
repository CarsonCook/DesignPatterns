#include <iostream>
#include "template.hh"

using namespace std;

int main()
{
    AndroidBuilder ab;
    ab.build();
    IOSBuilder ib;
    ib.build();
    return 0;
}
