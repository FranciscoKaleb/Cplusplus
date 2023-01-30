#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    :Savings_Account{name, balance, int_rate}
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
        std::cout << "Withdrawal of " << amount  << " successful, Withdrawal count: " << withdrawal_count << std::endl;
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

void Trust_Account::add_interest()
{
    balance = balance + (balance * interest_rate);
    std::cout << "Trust account add interest triggered" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
    os << "Account name: " << account.name << std::endl 
    << "Balance: " << account.balance << std::endl
    << "Interest rate: " << account.interest_rate << "% annually" << std::endl << std::endl;
}

Trust_Account::~Trust_Account()
{
    std::cout << "Trust Account destructor" << std::endl;
}