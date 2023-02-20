#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"

class Trust_Account: public Savings_Account
{
private:
    static constexpr int DEFAULT_MAX_PERYEAR = 1;
    static constexpr double DEFAULT_MAX_AMOUNT = 0.1;
    static constexpr int DEFAULT_WITHDRAW_COUNT = 0;
protected:
    int max_withdrawal_peryear = DEFAULT_MAX_PERYEAR;
    int withdrawal_count = DEFAULT_WITHDRAW_COUNT;
    double max_amount_percetage_withdrawn = DEFAULT_MAX_AMOUNT;
    
public:
    Trust_Account(std::string n, double b, int acc_age, double int_rate, 
    int withdrawal_times = DEFAULT_MAX_PERYEAR, double max_amount = DEFAULT_MAX_AMOUNT);
    virtual void withdraw(double amount) override;
    virtual void display() override;
    virtual void update_history(std::string type_t, double t_amount) override;
    virtual void display_history() override;
    virtual void print(std::ostream &os) const override;
    virtual ~Trust_Account();
    // if system expands there should be year, reset of withdraw count per year, expiration etc.
    // withdrawal/ deposit history
    // transaction history
    // connected accounts?
    // personal info of user
    // connect to database
    
};

#endif // TRUST_ACCOUNT_H
