#include <iostream>
#include "adaptor.hh"

using namespace std;

int main()
{
    AfricanLion* afl=new AfricanLion();
    AsianLion* asl=new AsianLion();
    Hunter* h=new Hunter();
    h->hunt(afl);
    h->hunt(asl);
    WildDog* d=new WildDog();
    h->hunt(new WildDogAdaptor(d));//can just do hunt(d), because hunt only takes a lion type
    delete afl; delete asl; delete h; delete d;
    return 0;
}
