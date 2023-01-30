#include "Savings_Account.h"


Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    :Account{name, balance}, interest_rate{int_rate}
{
    //balance = balance + (balance * int_rate/100); cant have interest increase the moment you open an account
    //should be a function that will trigger
}

bool Savings_Account::deposit(double amount) 
{
    balance = balance + amount;
    return true; 
}

void Savings_Account::add_interest()
{
    balance = balance + (balance * interest_rate);
    std::cout << "Savings account add interest triggered" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account)
{
    os << "Account name: " << account.name << std::endl 
    << "Balance: " << account.balance << std::endl
    << "Interest rate: " << account.interest_rate << "% annually" << std::endl << std::endl;
}

Savings_Account::~Savings_Account()
{
    std::cout << "Savings Account destructor" << std::endl;
}

