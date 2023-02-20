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
    static constexpr int DEFAULT_AGE = 0;
protected:
    std::string name;
    double balance;
    int account_age; // days
    
public:
    //void set_name(std::string n){name = n;}
    //void set_balance(double b){balance = b;}
    Account(std::string name = DEFAULT_NAME, double balance = DEFAULT_BALANCE, int account_age = DEFAULT_AGE);
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    //virtual double get_balance() const;
    virtual void add_interest();
    virtual ~Account();
};

#endif // ACCOUNT_H
