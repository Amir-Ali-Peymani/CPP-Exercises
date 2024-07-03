#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num){
    cout<<"priting integer: "<<num<<endl;
}

void print(double num){
    cout<<"printing double: "<<num<<endl;
}

void print(string name){
    cout<<"printing string: "<<name<<endl;
}

void print(string first, string second){
    cout<<"string: printing first: "<<first<<" And second: "<<second<<endl;
}

void print(vector<string> names){
    for(auto name: names){
        cout<<name<<endl;
    }
}

int main(){
    print(100);
    print('a');//characters is always promoted to int should print 65 ASCII('A')
    
    print(10.4);//this would call the double one function
    print(299.4f);//this would cal the double but first convert the float to double
    
    print("C-style string");// in here c-style(array of characters) converted to C++ string object 
    
    string s{"C++ string"};
    print(s);
    
    print("C-style string", s);
    
    vector<string> names{"amir ali", "darth vader", "commander tarin"};
    print(names);
    
    return 0;
}
