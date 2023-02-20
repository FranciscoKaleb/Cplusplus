#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

class Savings_Account: public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
private:
    static constexpr const char *DEFAULT_NAME = "Unnamed Savings Account";
    static constexpr double DEFAULT_BALANCE = 0.0;
    static constexpr double DEFAULT_INTEREST_RATE = 0.0;
protected:
    double interest_rate;
public:
    Savings_Account(std::string name = DEFAULT_NAME, double balance = DEFAULT_BALANCE, double int_rate = DEFAULT_INTEREST_RATE);
    bool deposit(double amount)override;
    virtual void add_interest() override;
    //withdraw is inherited
    virtual ~Savings_Account();

};

#endif // SAVINGS_ACCOUNT_H
