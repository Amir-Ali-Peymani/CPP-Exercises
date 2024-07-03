#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.hpp"

class Savings_Account:public Account
{
public:
    double int_rate;
    
    Savings_Account(double int_rate =0);
    ~Savings_Account();
    void diposit(double amount);
    void withdraw(double amount);
};

#endif // _SAVINGS_ACCOUNT_H_
