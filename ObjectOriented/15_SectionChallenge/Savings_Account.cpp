#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string n, double a, int acc_age, double int_rate)
:Account(n, a, acc_age), interest_rate {int_rate}
{
    
}

Savings_Account::~Savings_Account()
{
}

void Savings_Account::deposit(double amount)
{
    balance = balance + amount;
    std::cout << "Deposited " << amount << " successfully" << std::endl;
    std::cout << "Balance: " << balance << std::endl;
    update_history("deposit", amount);
}

void Savings_Account::withdraw(double amount)
{
    if(balance - amount >= 0)
    {
        balance = balance - amount;
        std::cout << "Withdrawal of " << amount << " successful " << std::endl;
        std::cout << "Remaining balance: " << balance << std::endl;
        update_history("withdrawal", amount);
    }
    else
    {
        std::cout <<"Withdrawal failed - insufficient fund" << std::endl;
    }
}

void Savings_Account::display()
{
    std::cout << "Name : " << name << std::endl << "Balance : " << balance << std::endl << "Age : " << age << std::endl;
}

void Savings_Account::add_interest()
{
    balance = balance + (balance*interest_rate);
}

void Savings_Account::update_history(std::string type_t, double t_amount)
{
    id.push_back(count++);
    t_type.push_back(type_t);
    amount.push_back(t_amount);
}

void Savings_Account::display_history()
{
    std::cout << "========transaction history ========" << std::endl;
    for(size_t i = 0; i < id.size(); i++)
    {
        std::cout << id[i] << " " << amount[i] << " " << t_type[i] << std::endl;
    }
}