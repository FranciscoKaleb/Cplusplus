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
    balance = balance + (balance * interest_rate);
    return true; 
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account)
{
    os << "Account name: " << account.name << std::endl 
    << "Balance: " << account.balance << std::endl
    << "Interest rate: " << account.interest_rate << "% annually" << std::endl << std::endl;
}



