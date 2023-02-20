#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string n, double b, int acc_age, double int_rate, 
                            int withdrawal_times, double max_amount)
:Savings_Account(n, b, acc_age, int_rate), 
max_withdrawal_peryear {withdrawal_times}, max_amount_percetage_withdrawn {max_amount}
{
}

void Trust_Account::withdraw(double amount)
{
    if(balance - amount >= 0 && amount <= max_amount_percetage_withdrawn*balance && withdrawal_count <= max_withdrawal_peryear )
    {
        balance = balance - amount;
        withdrawal_count++;
        std::cout << "Withdrawal of " << amount << " successful" << std::endl;
        std::cout << "Remaining balance: " << balance << std::endl;
        update_history("withdrawal", amount);
    }
    else //if()
    {
        std::cout << "Condition not met " << std::endl;
    }
}

void Trust_Account::display()
{
    std::cout << "Name : " << name << std::endl << "Balance : " << balance << std::endl << "Age : " << age << std::endl;
}

void Trust_Account::update_history(std::string type_t, double t_amount)
{
    id.push_back(count++);
    t_type.push_back(type_t);
    amount.push_back(t_amount);
}

void Trust_Account::display_history()
{
    std::cout << "========transaction history ========" << std::endl;
    for(size_t i = 0; i < id.size(); i++)
    {
        std::cout << id[i] << " " << amount[i] << " " << t_type[i] << std::endl;
    }
}

void Trust_Account::print(std::ostream &os) const
{
    os << "[User : " << name << "" << " | Balance: " << balance << "]" << std::endl;
}

Trust_Account::~Trust_Account()
{
    
}

