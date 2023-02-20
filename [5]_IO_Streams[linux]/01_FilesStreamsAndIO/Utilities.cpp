#include "Utilities.h"

void deposit(std::vector<Account*> &accounts, double amount)
{
    for(auto &account:accounts)
    {
        account->deposit(amount);
    }
    std::cout << "Deposited to accounts successfully " << std::endl;
}

void withdraw(std::vector<Account*> &accounts, double amount)
{
    for(auto &account: accounts)
    {
        account->withdraw(amount);
    }
    std::cout << "Withdrawal of " << amount << " to accounts successful " << std::endl;
}

void display(const std::vector<std::unique_ptr<Account>> &accounts)
{
    for(auto &account:accounts)
    {
       account->display();
    }
}

