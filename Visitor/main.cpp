#include <iostream>
#include "visitor.hh"

using namespace std;

int main()
{
    Monkey* m=new Monkey();
    Lion* l=new Lion();
    Speak* speak=new Speak();
    m->accept(speak);
    l->accept(speak);
    return 0;
}
