/*
 * 
 * 1 dollar = 100 cents
 * 1 quarter = 25 cents
 * 1 dime = 10 cents 
 * 1 nickel = 5 cents
 * 1 penny = 1 cents
 * 
 * 
 * First ask the user how much cent
 * 
 * if the cent is equall or more than 100 it should be equal to one dollar or more
 * 
 * if the cent is equall or more than 25 it should be equal to one quarter or more
 * 
 * if the cent is equall or more than 10 it should be equal to one dime or more
 * 
 * if the cent is equall or more than 5 it should be equal to one nickel or more
 * 
 * if the cent is equall or more than 1 it should be exaclty one or more penny
 * 
 * 
 * then print out the whole result
 * 
 */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){ 
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};
    
    int balance{};
    
    int dollar{}, quarter{}, dime{}, nickel{}, penny{};
    
    cout<<"Enter the amount in the cent:";
    int cent{};
    cin>>cent;
    
    dollar = cent/dollar_value;
    balance = cent -(dollar * dollar_value);
    
    quarter = balance/quarter_value;
    balance = balance - (quarter * quarter_value);
    
    dime = balance / dime_value;
    balance = balance - (dime * dime_value);
    
    nickel = balance/ nickel_value;
    balance = balance - (nickel * nickel_value);
    
    penny = balance;
    
    cout<<"dollar: "<<dollar<<endl;
    cout<<"quarter: "<<quarter<<endl;
    cout<<"dime: "<<dime<<endl;
    cout<<"nickel: "<<nickel<<endl;
    cout<<"pennies: "<<penny<<endl;
    
    
    

    
    
    
    
    
    
    
    return 0;
}
