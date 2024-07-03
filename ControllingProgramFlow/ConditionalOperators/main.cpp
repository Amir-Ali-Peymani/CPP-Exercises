#include <iostream>

using namespace std;

int main(){
    
//    int unsigned number{};
//    cin>>number;
//    
//    if ( number%2==0){
//        cout<<number<<" is even"<<endl;
//    }else{
//        cout<<number<<" is odd"<<endl;
//    }
//    
//    cout<<number<<((number%2==0) ? "even":"odd")<<endl;

    int number{}, number2{};
    cout<<"enter two number seperated: ";
    cin>>number>>number2;
    
    cout<<"these two number are: "<<((number==number2) ? "they are same": "they are not same")<<endl;
    
    
    
    
    return 0;
}
