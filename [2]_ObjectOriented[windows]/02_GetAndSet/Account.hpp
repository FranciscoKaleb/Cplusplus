#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <string>

class Account
{
  
private:
    std::string userName;
    double balance;
    
public:
    // methods declared inline
    void set_balance(double val)
    {
        balance = val;
    }
    double get_balance()
    {
        return balance;
    }
    
    //methods that will be declared outside
    void set_name(std::string name);
    std::string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);

};

#endif // ACCOUNT_HPP
