#include <iostream>
#include <Mystring.hpp>

using namespace std;

int main(){
    
    Mystring larry{"larry"};
    
    Mystring moe{"Moe"};
    
    Mystring curly;
    
    cout<<"Enter the thir stooge's first name: ";
    cin>>curly;
    
    cout<<"the three stooges are"<<larry<<","<<moe<<", and "<<curly<<endl;
    
    cout<<"\nEnther the three stooges name sperated by a space: ";
    cin>>larry>>moe>>curly;
    
    cout<<" the three stooges are "<<larry<<", "<<moe<<" ,and"<<curly<<endl;
    
    return 0;
}
