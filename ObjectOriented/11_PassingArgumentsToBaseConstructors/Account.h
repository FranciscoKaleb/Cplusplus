#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string.h>

class Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:
    static constexpr const char *DEFAULT_NAME = "Unnamed Account";
    static constexpr double DEFAULT_BALANCE = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = DEFAULT_NAME, double balance = DEFAULT_BALANCE);
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    double get_balance() const;
};

#endif // ACCOUNT_H
