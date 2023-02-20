#include "Checkingz_Account.h"

Checkings_Account::Checkings_Account(std::string n, double a, int acc_age, double fee)
:Account(n ,a ,acc_age), withdrawal_fee {fee}
{
}

void Checkings_Account::withdraw(double amount)
{
    if(balance - amount >= 0)
    {
        balance = balance - amount - withdrawal_fee;
        std::cout << "Withdrawal of " << amount << " successful " << std::endl;
        update_history("withdrawal", amount);
    }
    else
    {
        std::cout << "Insufficient fund" << std:: endl;
    }
}

void Checkings_Account::deposit(double amount)
{
    balance = balance + amount;
    std::cout << "Deposit successful" << std::endl;
    update_history("deposit", amount);
}

void Checkings_Account::display()
{
    std::cout << "Name : " << name << std::endl << "Balance : " << balance << std::endl << "Age : " << age << std::endl;
}

void Checkings_Account::update_history(std::string type_t, double t_amount)
{
    id.push_back(count++);
    t_type.push_back(type_t);
    amount.push_back(t_amount);
}

void Checkings_Account::display_history()
{
    std::cout << "========transaction history ========" << std::endl;
    for(size_t i = 0; i < id.size(); i++)
    {
        std::cout << id[i] << " " << amount[i] << " " << t_type[i] << std::endl;
    }
}

void Checkings_Account::print(std::ostream &os) const
{
    os << "[User : " << name << "" << " | Balance: " << balance << "]" << std::endl;
}

Checkings_Account::~Checkings_Account()
{
}

