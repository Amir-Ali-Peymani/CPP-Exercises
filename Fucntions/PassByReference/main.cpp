#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

void pass_by_ref1(int &num){
    num = 100;
}

void pass_by_ref2(string &s){
    s = "changed";
}

void pass_by_ref3(vector<string> &v){
    v.clear();
}

void print_vector(const vector<string> &v){
    for(auto name: v){
        cout<<name<<endl;
    }
    cout<<endl;
}

int main(){
    
    int number1{120};
    int number2{200};
    
    cout<<"num1 before calling pass by reference: "<<number1<<endl;
    pass_by_ref1(number1);
    cout<<"num after calling the pass by reference: "<<number1<<endl;
    
    cout<<"\nnum2 before calling pass by reference: "<<number2<<endl;
    pass_by_ref1(number2);
    cout<<"number after calling pass by reference: "<<number2<<endl;
    
    string name{"amir ali"};
    cout<<"the name before calling pass by reference: "<<name<<endl;
    pass_by_ref2(name);
    cout<<"\nthe name after calling pass by refence: "<<name<<endl;
    
    vector<string> commanders {"amir ali", "darth vader", "tarin"};
    print_vector(commanders);
    cout<<"callin to remove"<<endl;
    pass_by_ref3(commanders);
    cout<<"after deleting: "<<endl;
    print_vector(commanders);
    
    return 0;
}
