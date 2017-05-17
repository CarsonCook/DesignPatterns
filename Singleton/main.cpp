#include <iostream>
#include "singleton.hh"

using namespace std;

int main()
{
    DbConnection* db1=DbConnection::getInstance();
    db1->printConnection();
    DbConnection* db2=DbConnection::getInstance();
    db2->printConnection();
    db1->printConnection(); //same reference as db2!
    //destructor deals with deleting things
    return 0;
}
