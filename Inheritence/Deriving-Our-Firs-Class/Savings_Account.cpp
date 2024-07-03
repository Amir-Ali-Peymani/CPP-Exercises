#include "Savings_Account.hpp"
#include <iostream>

Savings_Account::Savings_Account(double int_rate)
{
}

Savings_Account::~Savings_Account()
{
}

void Savings_Account::diposit(double amount){
    std::cout<<"Savings Account deposit called with "<<amount<<std::endl;
}

void Savings_Account::withdraw(double amount){
    std::cout<<"Savings Account withdraw called with "<<amount<<std::endl;
}

