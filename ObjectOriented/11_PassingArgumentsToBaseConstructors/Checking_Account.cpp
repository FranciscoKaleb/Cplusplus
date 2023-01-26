#include "Checking_Account.h"


Checking_Account::Checking_Account(std::string name, double balance)
    :Account{name, balance}
{
    
}

bool Checking_Account::deposit(double amount)
{
    balance += amount;
    return true;
}

bool Checking_Account::withdraw(double amount)
{
    if(balance - amount >= 0)
    {
        balance = balance - amount - WITHDRAWAL_FEE;
        return true;
    }
    else
    {
        std::cout << "Failed to withdraw, not enough balance" << std::endl;
        return false;
    }
    
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account)
{
    os << "Account name: " << account.name << std::endl 
    << "Balance: " << account.balance << std::endl;
}
