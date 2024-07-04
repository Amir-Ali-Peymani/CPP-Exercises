#include <iostream>


//remember luke! it is better to use the virtual for all the function as a practice
using namespace std;

struct Account{
    virtual void display(){
        cout<<"this is the Account class"<<endl;
    }
};

struct Savings:public Account{
    virtual void display(){
        cout<<"this is the Savings Account"<<endl;
    }
};

struct Checkings:public Account{
    virtual void display(){
        cout<<"this is the Checkings Account"<<endl;
    }
};

struct Trust: public Account{
    virtual void display(){
        cout<<"this is the Trust Account"<<endl;
    }
};

int main(){
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checkings();
    Account *p4 = new Trust();
    
    p1->display();
    p2->display();
    p3->display();
    p4->display();
    
    cout<<"====cleaning up===="<<endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}
