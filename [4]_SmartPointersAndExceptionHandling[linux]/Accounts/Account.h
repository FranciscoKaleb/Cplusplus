#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>
#include "I_Printable.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

class Account : public I_Printable
{
private:
	static constexpr char DEFAULT_NAME[] = "Account";
	static constexpr double  DEFAULT_BALANCE = 0.0;
	static constexpr int  DEFAULT_AGE = 0;


protected:
    // protected fields

    // int account_id {};
    // Date date_opened {};
    // Date exp_date {};
    std::string name {};
    double balance {};
    int age {};

    // for transaction history
    int count {0};
    std::vector<int> id {};
    std::vector<double> amount {};
    std::vector<std::string> t_type {};
public:


    Account(std::string n = DEFAULT_NAME, double b = DEFAULT_BALANCE, int age = DEFAULT_AGE)
    :name{n}, balance {b}, age{age}
    {
        if(balance < 0.0)
        {
            throw IllegalBalanceException{};
        }
    }
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void display() = 0;
    virtual void update_history(std::string type_t, double t_amount) = 0;
    virtual void display_history() = 0;
    virtual void print(std::ostream &os) const
    {

    }
    virtual ~Account(){};

};


#endif // ACCOUNT_H
