#ifndef CHECKINGS_ACCOUNT_H
#define CHECKINGS_ACCOUNT_H
#include "Account.h"

class Checkings_Account: public Account
{
private:
    static constexpr double DEFAULT_FEE {1};
protected:
    double withdrawal_fee = DEFAULT_FEE;
public:
    Checkings_Account(std::string n, double a, int acc_age, double fee = DEFAULT_FEE);
    void withdraw(double amount) override;
    void deposit(double amount) override;
    virtual void display() override;
    virtual void update_history(std::string type_t, double t_amount) override;
    virtual void display_history() override;
    ~Checkings_Account();
};

#endif // CHECKINGS_ACCOUNT_H
