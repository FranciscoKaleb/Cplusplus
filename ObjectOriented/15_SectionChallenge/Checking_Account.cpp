#include "Checking_Account.h"


Checking_Account::Checking_Account(std::string name, double balance)
    :Account{name, balance, account_age}
{
    //set_name(name);
    //set_balance(balance);
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
        std::cout << "Withdrawal of " << amount  << " successful" << std::endl;
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

Checking_Account::~Checking_Account()
{
    std::cout << "Checking Account destructor " << std::endl;
}