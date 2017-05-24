#ifndef template_hh
#define template_hh

class Builder
{
public:
    virtual void build() final;
    virtual void test()=0;
    virtual void assemble()=0;
    virtual void deploy()=0;
};

class AndroidBuilder : public Builder
{
public:
    void test();
    void assemble();
    void deploy();
};

class IOSBuilder : public Builder
{
public:
    void test();
    void assemble();
    void deploy();
};


#endif // template_hh
