#include "Account_Util.h"
#include <iostream>

// Displays Account objects in a vector of Account objects

void display(const std::vector<Account> &accounts)
{
    std::cout << "=============Accounts===============" << std::endl;
    for(const Account &account : accounts)
    {
        std::cout << account << std::endl;
    }
}

void deposit(std::vector<Account> &accounts, double amount)
{
    std::cout << "=============Depositing to Accounts==============" << std::endl;
    for(Account &account: accounts)
    {
        if(account.deposit(amount))
        {
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        }
        else
        {
            std::cout << "Failed to deposit " << amount << " to " << account << std::endl;
        }
    }
}
void withdraw(std::vector<Account> &accounts, double amount)
{
    std::cout << "=============Withdrawing from Accounts==============" << std::endl;
    for(Account &account:accounts)
    {
        if(account.withdraw(amount))
        {
            std::cout << "Withdrew " << amount << " from " << account << std::endl;
        }
        else
        {
            std::cout << "Failed to withdraw of " << amount << " from " << account << std::endl;
        }
    }
}


void display(const std::vector<Savings_Account> &accounts)
{
    std::cout << "=============Savings Accounts===============" << std::endl;
    for(const Savings_Account &account : accounts)
    {
        std::cout << account << std::endl;
    }
}

void deposit(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "=============Depositing to Savings Accounts==============" << std::endl;
    for(Savings_Account &account: accounts)
    {
        if(account.deposit(amount))
        {
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        }
        else
        {
            std::cout << "Failed to deposit " << amount << " to " << account << std::endl;
        }
    }
}
void withdraw(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "=============Withdrawing from Savings Accounts==============" << std::endl;
    for(Savings_Account &account:accounts)
    {
        if(account.withdraw(amount))
        {
            std::cout << "Withdrew " << amount << " from " << account << std::endl;
        }
        else
        {
            std::cout << "Failed to withdraw of " << amount << " from " << account << std::endl;
        }
    }
}
