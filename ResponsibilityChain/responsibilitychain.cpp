#include "responsibilitychain.hh"
#include <iostream>

Account::Account(int balance)
{
    mBalance=balance;
}

bool Account::canPay(int amount)
{
    return mBalance-amount>=0;
}

Account* Account::getNext()
{
    return mNext;
}

void Account::setNext(Account* next)
{
    mNext=next;
}

int Account::getBalance()
{
    return mBalance;
}

void Account::setBalance(int balance)
{
    mBalance=balance;
}

BankAccount::BankAccount(int balance):Account(balance){};

void BankAccount::pay(int amount)
{
    if (canPay(amount))
    {
        setBalance(getBalance()-amount);
        std::cout << "bank account paid" << std::endl;
    }
    else
    {
        std::cout << "bank account can't pay" << std::endl;
        if (getNext())
        {
            getNext()->pay(amount);
        }
        else
        {
            std::cout << "nothing can pay :(" << std::endl;
        }
    }
}

PayPalAccount::PayPalAccount(int balance):Account(balance){};

void PayPalAccount::pay(int amount)
{
    if (canPay(amount))
    {
        setBalance(getBalance()-amount);
        std::cout << "pay pal account paid" << std::endl;
    }
    else
    {
        std::cout << "paypal account can't pay" << std::endl;
        if (getNext())
        {
            getNext()->pay(amount);
        }
        else
        {
            std::cout << "nothing can pay :(" << std::endl;
        }
    }
}

BitcoinAccount::BitcoinAccount(int balance):Account(balance){};

void BitcoinAccount::pay(int amount)
{
    if (canPay(amount))
    {
        setBalance(getBalance()-amount);
        std::cout << "bitcoin account paid" << std::endl;
    }
    else
    {
        std::cout << "bitcoin account can't pay" << std::endl;
        if (getNext())
        {
            getNext()->pay(amount);
        }
        else
        {
            std::cout << "nothing can pay :(" << std::endl;
        }
    }
}
