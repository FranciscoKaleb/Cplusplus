#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Account.h"

class Trust_Account: public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char *DEFAULT_NAME = "Unnamed Trusts Account";
    static constexpr double DEFAULT_BALANCE = 0.0;
    //static constexpr int DEFAULT_DAYS_IN_YEAR = 365;
    static constexpr int DEFAULT_MAX_WITHDRAWAL = 3;
protected:
    int withdrawal_count {0};
    
public:
    Trust_Account(std::string name = DEFAULT_NAME, double balance = DEFAULT_BALANCE);
    bool deposit(double amount);
    bool withdraw(double amount) override; 
    

};

#endif // TRUST_ACCOUNT_H
