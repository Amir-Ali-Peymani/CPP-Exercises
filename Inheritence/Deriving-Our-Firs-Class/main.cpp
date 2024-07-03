#include <iostream>
#include <Savings_Account.hpp>

using namespace std;

int main(){
    Account account;
    account.deposit(22.3);
    account.withdraw(333.4);
    
    cout<<endl;
    cout<<"============================="<<endl;
    cout<<endl;
    Account *pointer_account = new Account();
    pointer_account->deposit(33.23);
    pointer_account->withdraw(33.32);
    delete pointer_account;
    
    cout<<endl<<"=============================="<<endl;
    
    Savings_Account saving_account;
    saving_account.deposit(35);
    saving_account.withdraw(33);
    cout<<endl<<"==============================="<<endl;
    Savings_Account *pointer_saving_account = new Savings_Account();
    pointer_saving_account->deposit(33);
    pointer_saving_account->withdraw(3);
    delete pointer_saving_account;
    
    return 0;
}
