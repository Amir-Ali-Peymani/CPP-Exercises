#include <iostream>
#include <string>

using namespace std;

int main(){
    string names [] {"ct-7567", "ct-5385", "cc-4477"};
    
    string *pointer{nullptr};
    
    pointer = names;
    
    cout<<"========================="<<endl;
    cout<<names<<endl;
    cout<<pointer+1<<endl;
    cout<<pointer+2<<endl;
    cout<<"========================="<<endl;
    cout<<names[0]<<endl;
    cout<<names[1]<<endl;
    cout<<names[2]<<endl;
    cout<<"========================="<<endl;
    cout<<pointer[0]<<endl;
    cout<<pointer[1]<<endl;
    cout<<pointer[2]<<endl;
    cout<<"=========================="<<endl;
    cout<<*pointer<<endl;
    cout<<*(pointer+1)<<endl;
    cout<<*(pointer+2)<<endl;
    cout<<"=========================="<<endl;
    cout<<*names<<endl;//in here we are deferencing the first element
    cout<<*(names+1)<<endl;
    cout<<*(names+2)<<endl;
    cout<<"=========================="<<endl;
    
    
    

    
    
    return 0;
}
