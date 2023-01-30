#include "Account.h"


Account::Account(std::string name, double balance, int acc_age)
    :name{name},balance{balance},account_age{acc_age}
{
    
}

bool Account::deposit(double amount)
{
   if(amount < 0)
   {
       return false;
   }
   else
   {
       balance += amount;
       std::cout << "Base deposit triggred" << std::endl;
       return true;
   }
}

bool Account::withdraw(double amount)
{
    if(balance-amount >= 0)
    {
        balance -= amount;
        std::cout << "Withdrawal of " << amount  << " successful" << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}

void Account::add_interest()
{
    std::cout << "Account add interest triggered " << std::endl;
}

std::ostream &operator<<(std::ostream &os,const Account &account)
{
    os << "Name: " << account.name << " Account balance: " << account.balance;
    return os;
}

Account::~Account()
{
    std::cout << "Account destructor" << std::endl;
}


