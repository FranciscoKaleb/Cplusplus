#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance)
    :Account{name, balance}
{
    //balance = balance + (balance * int_rate/100); cant have interest increase the moment you open an account
    //should be a function that will trigger
}

bool Trust_Account::deposit(double amount)
{
    balance = balance + amount;
    return true;
}

bool Trust_Account::withdraw(double amount) 
{
    if((balance-amount) >= 0 && withdrawal_count <= 2 && amount < 0.2*balance)
    {
        ++withdrawal_count;
        balance = balance - amount;
        std::cout << "Successful withdrawal, withdrawal count " << withdrawal_count << std::endl;
        return true;
    }
    else
    {
        if(withdrawal_count > 2)
        {
            std::cout << "Maximum number of withdrawal per year reached" << std::endl;
            return false;
        }
        if((amount > (.2*balance)) && this->balance-amount >= 0)
        {
            std::cout << "Cannot withdraw amount more than 20% of the total remaining balance" << std::endl;
            return false;
        }
        if(this->balance-amount < 0)
        {
            std::cout << "Failed to withdraw, not enough balance" << std::endl;
            return false;
        }
    }
        
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
    os << "Account name: " << account.name << std::endl 
    << "Balance: " << account.balance << std::endl;
}

