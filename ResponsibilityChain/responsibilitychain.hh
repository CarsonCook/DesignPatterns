#ifndef responsibilitychain_hh
#define responsibilitychain_hh

class Account
{
public:
    Account(int balance);
    virtual ~Account(){};
    virtual void pay(int amount)=0;
    bool canPay(int amount);
    Account* getNext();
    void setNext(Account*);
    int getBalance();
    void setBalance(int balance);
private:
    Account* mNext=nullptr; //initially there is no next in chain
    int mBalance;
};

class BankAccount : public Account
{
public:
    BankAccount(int balance);
    void pay(int amount);
};

class PayPalAccount : public Account
{
public:
    PayPalAccount(int balance);
    void pay(int amount);
};

class BitcoinAccount : public Account
{
public:
    BitcoinAccount(int balance);
    void pay(int amount);
};

#endif // responsibilitychain_hh
