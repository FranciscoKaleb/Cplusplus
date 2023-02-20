#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"


class Trust_Account final: public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char *DEFAULT_NAME = "Unnamed Trusts Account";
    static constexpr double DEFAULT_BALANCE = 0.0;
    static constexpr double DEFAULT_INTEREST_RATE = 0.0;
    static constexpr int DEFAULT_MAX_WITHDRAWAL = 3;
protected:
    int withdrawal_count {0};
    //double interest_rate;
    
public:
    Trust_Account(std::string name = DEFAULT_NAME, double balance = DEFAULT_BALANCE, double int_rate = DEFAULT_INTEREST_RATE);
    //bool deposit(double amount);
    bool withdraw(double amount) override; 
    bool deposit(double amount) override;
    virtual ~Trust_Account();
    void add_interest()override;

};

#endif // TRUST_ACCOUNT_H
