#include <iostream>

using namespace std;

struct Base{
    void say_hello()const {
        cout<<"hello there - iam the base class."<<endl;
    }
};

struct Derived:public Base{    
    void say_hello()const {
        cout<<"hello there - iam the derived class."<<endl;
    }
};

void greetings(Base &base){
    cout<<"greeting ";
    base.say_hello();
}

int main(){
    Base b;
    b.say_hello();
    
    Derived d;
    d.say_hello();
    
    greetings(b);
    greetings(d);
    
    Base *p = new Derived();
    (*p).say_hello();
    
    delete p;
    return 0;
}
