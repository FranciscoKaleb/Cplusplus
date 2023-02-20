#include "Account_Util.h"
#include <iostream>

// Displays Account objects in a vector of Account objects

void display(const std::vector<Account*> &accounts)
{
    std::cout << "=============Accounts===============" << std::endl;
    for(const auto &account : accounts)
    {
        std::cout << *account << std::endl;
    }
}

void deposit(std::vector<Account*> &accounts, double amount)
{
    std::cout << "=============Depositing to Accounts==============" << std::endl;
    for(auto &account: accounts)
    {
        if(account->deposit(amount))
        {
            std::cout << "Deposited " << amount << " to " << *account << std::endl;
        }
        else
        {
            std::cout << "Failed to deposit " << amount << " to " << account << std::endl;
        }
    }
}
void withdraw(std::vector<Account*> &accounts, double amount)
{
    std::cout << "=============Withdrawing from Accounts==============" << std::endl;
    for(auto &account:accounts)
    {
        if(account->withdraw(amount))
        {
            std::cout << "Withdrew " << amount << " from " << *account << std::endl;
        }
        else
        {
            std::cout << "Failed to withdraw of " << amount << " from " << *account << std::endl;
        }
    }
}

void withdraw(Account &account, double amount)
{
    account.withdraw(amount);
    std::cout << "Successful withdraw using base class reference" << std::endl;
}
