#include <iostream>

using namespace std;

struct Account{
    virtual void display(){
        cout<<"this is Account class."<<endl;
    }
    virtual ~Account(){
        cout<<"this is Account destructor"<<endl;
    }
};

struct Savings:public Account{
    void display(){
        cout<<"this is Savings class."<<endl;
    }
    virtual ~Savings(){
        cout<<"this is Savings destructor"<<endl;
    }
};

struct Checkings: public Account{
    void display(){
        cout<<"this is Checking class."<<endl;
    }
    ~Checkings(){
        cout<<"this is the Checking destructor"<<endl;
    }
};

struct Trust:public Account{
    void display(){
        cout<<"this is Account class."<<endl;
    }
    ~Trust(){
        cout<<"this is the Trust destructor"<<endl;
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
    
    cout<<"=====deleting====="<<endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    
    return 0;
}
