#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <vector>


class Account
{
    
private:
    static std::string constexpr DEFAULT_NAME = "Account";
    static double constexpr DEFAULT_BALANCE = 0.0;
    static int constexpr DEFAULT_AGE = 0;

protected:
    // protected fields
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
    {};
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void display() = 0;
    virtual void update_history(std::string type_t, double t_amount) = 0;
    virtual void display_history() = 0;
    virtual ~Account(){};
};

#endif // ACCOUNT_H
