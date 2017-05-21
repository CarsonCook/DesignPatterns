#include <iostream>
#include "responsibilitychain.hh"

using namespace std;

int main()
{
    BankAccount* ba=new BankAccount(100);
    PayPalAccount* ppa=new PayPalAccount(200);
    BitcoinAccount* bca=new BitcoinAccount(300);
    ba->setNext(ppa);
    ppa->setNext(bca);
    ba->pay(250);
    cout << "*****" << endl;
    ba->pay(350);
    delete bca; delete ppa; delete ba;
    return 0;
}
