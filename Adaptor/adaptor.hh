#ifndef adaptor_hh
#define adaptor_hh

class Lion
{
public:
    virtual void roar()=0;
    virtual ~Lion(){};
};

class AfricanLion : public Lion
{
public:
    void roar();
};

class AsianLion : public Lion
{
public:
    void roar();
};

class Hunter
{
public:
    void hunt(Lion*);
};

class WildDog
{
public:
    void bark();
};

class WildDogAdaptor : public Lion
{
public:
    WildDogAdaptor(WildDog*);
    void roar();
private:
    WildDog* mDog;
};

#endif // adaptor_hh
