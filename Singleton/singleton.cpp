#include <iostream>
#include "singleton.hh"

int DbConnection::calls;
DbConnection* DbConnection::mDb;

DbConnection::DbConnection(){}

DbConnection::~DbConnection()
{
    if (mDb)
    {
        delete mDb;
    }
    mDb=nullptr;
}

DbConnection* DbConnection::getInstance()
{
    calls++;
    if (!mDb)
    {
        mDb=new DbConnection();
    }
    return mDb;
}

void DbConnection::printConnection()
{
    std::cout << "Connection " << calls << std::endl;
}
