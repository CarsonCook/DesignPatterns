#include "visitor.hh"
#include <iostream>

void Monkey::accept(AnimalOperation* op)
{
    op->visitMonkey(this);
}

void Monkey::shout()
{
    std::cout << "OOH OOH AH AH" << std::endl;
}

void Lion::accept(AnimalOperation* op)
{
    op->visitLion(this);
}

void Lion::roar()
{
    std::cout << "RAWR" << std::endl;
}

void Speak::visitMonkey(Monkey* m)
{
    m->shout();
}

void Speak::visitLion(Lion* l)
{
    l->roar();
}
