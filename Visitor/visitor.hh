#ifndef visitor_hh
#define visitor_hh

class Monkey;
class Lion;

class AnimalOperation //visitor
{
public:
    virtual void visitMonkey(Monkey* m)=0;
    virtual void visitLion(Lion* l)=0;
};

class Animal //visitee
{
public:
    virtual void accept(AnimalOperation* op)=0;
};

class Monkey : public Animal
{
public:
    void accept(AnimalOperation* op);
    void shout();
};

class Lion : public Animal
{
public:
    void accept(AnimalOperation* op);
    void roar();
};

class Speak : public AnimalOperation
{
public:
    void visitMonkey(Monkey* m);
    void visitLion(Lion* l);
};

#endif // visitor_hh
