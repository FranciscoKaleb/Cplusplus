#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

class Savings_Account: public Account
{
private:
    static constexpr double DEFAULT_INTEREST_MULTIPLIER = 0.00;
protected:
    double interest_rate = DEFAULT_INTEREST_MULTIPLIER;
public:
    Savings_Account(std::string n, double a, int acc_age, double int_rate);
    virtual void deposit(double amount) override;
    virtual void withdraw(double amount) override;
    virtual void add_interest();
    virtual void display() override;
    virtual void update_history(std::string type_t, double t_amount) override;
    virtual void display_history() override;
    virtual void print(std::ostream &os) const override;
    virtual ~Savings_Account();
};

#endif // SAVINGS_ACCOUNT_H
