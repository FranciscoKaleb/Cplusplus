#include "Account.hpp"

void Account::set_name(std::string n)
{
    userName = n;
}
std::string Account::get_name()
{
    return userName;
}


bool Account::deposit(double amount)
{
    balance = balance + amount;
    return true;
}


bool Account::withdraw(double amount)
{
    if(balance-amount >= 0)
    {
        balance = balance - amount;
        return true;
    }
    else
    {
        return false;
    }
}
