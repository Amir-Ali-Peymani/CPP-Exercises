#include <iostream>
#include <Mystring.hpp>

using namespace std;

int main(){
    cout<<boolalpha<<endl;
    
    Mystring larry {"Larry"};
    Mystring moe {"moe"};
    
    Mystring stooge = larry;
    larry.display();
    moe.display();
    
    cout<<(larry==moe)<<endl;
    cout<<(larry==stooge)<<endl;
    
    larry.display();
    Mystring larry2 = -larry;
    larry2.display();
    
    Mystring stooges = larry + "Moe";
    
    Mystring two_stooges = moe +" "+"Larry";
    two_stooges.display();
    
    Mystring three_stooges = moe+ " "+ larry +" "+"curly";
    three_stooges.display();


    return 0;
}
