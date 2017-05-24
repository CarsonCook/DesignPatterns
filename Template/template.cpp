#include "template.hh"
#include <iostream>

void Builder::build()
{
    assemble();
    test();
    deploy();
}

void AndroidBuilder::assemble()
{
    std::cout << "Android assemble" << std::endl;
}

void AndroidBuilder::test()
{
    std::cout << "Android test" << std::endl;
}

void AndroidBuilder::deploy()
{
    std::cout << "Android deploy" << std::endl;
}

void IOSBuilder::assemble()
{
    std::cout << "IOS assemble" << std::endl;
}

void IOSBuilder::test()
{
    std::cout << "IOS test" << std::endl;
}

void IOSBuilder::deploy()
{
    std::cout << "IOS deploy" << std::endl;
}
