#include <iostream>

using namespace std;

struct Account{
    virtual void display(){
        cout<<"Account"<<endl;
    }
    ~Account(){
        cout<<"Account destructor"<<endl;
    }
};

struct Savings:public Account{
    void display(){
        cout<<"Saving account"<<endl;
    }
    ~Savings(){
        cout<<"Savings destructor"<<endl;
    }
};

struct Checking: public Account{
    void display(){
        cout<<"Checking Account"<<endl;
    }
    ~Checking(){
        cout<<"Checking destructor"<<endl;
    }
};

struct Trust: public Account{
    void display(){
        cout<<"Trust Account"<<endl;
    }
    ~Trust(){
        cout<<"Trust destructor"<<endl;
    }
};

void show(Account &account){
    account.display();
}

int main(){
    
    Account a;
    Account &ref = a;
    ref.display();
    cout<<"===================="<<endl;
    Trust t;
    Account &ref1= t;
    ref1.display();
    cout<<"===================="<<endl;
    Account account;
    Trust trust;
    Savings savings;
    Checking checking;
    
    show(account);
    cout<<"==================="<<endl;
    show(trust);
    cout<<"==================="<<endl;
    show(savings);
    cout<<"==================="<<endl;
    show(checking);
    cout<<"==================="<<endl;
    
    
    return 0;
}
