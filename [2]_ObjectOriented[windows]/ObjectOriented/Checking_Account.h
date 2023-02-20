#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include <iostream>
#include <string.h>
#include "Account.h"

class Checking_Account: public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
    
private:
    static constexpr const char *DEFAULT_NAME = "Unnamed Account";
    static constexpr double DEFAULT_BALANCE = 0.0;
    static constexpr double WITHDRAWAL_FEE = 1.5;
    
protected:
    
public:
    Checking_Account(std::string name = DEFAULT_NAME, double balance = DEFAULT_BALANCE);
    bool deposit(double amount);
    bool withdraw(double amount)override;

};

#endif // CHECKING_ACCOUNT_H
