#include <iostream>
#include <string>

using namespace std;

class Player{
public:
    string name;
    int health;
    int xp;
    
    void talk(string text_to_say){cout<<name<<" says: "<<text_to_say;}
    bool is_dead();
};

class Account{
public:
    string name;
    double balance;
    
    void deposite(double bal){balance += bal; cout<<"In deposite: "<<endl;}
    void withdraw(double bal){balance -= bal; cout<<"In withdraw: "<<endl;}
    
};

int main(){
    
    Account frank_account;
    frank_account.name = "frank fucker";
    frank_account.balance=100;
    
    frank_account.deposite(11);
    frank_account.withdraw(1);
    
//    Player sith;
//    sith.name="Darth vader";
//    sith.health = 100;
//    sith.xp=22;
//    sith.talk("");
    
    Player *lord = new Player;
    (*lord).name = "darth vader";
    (*lord).health = 100;
    (*lord).xp =10;
    (*lord).talk("where is padme?? is she safe?");
    return 0;
}
