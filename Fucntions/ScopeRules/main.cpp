#include <iostream>

using namespace std;

void static_local_example();

void static_local_example(){
    static int number {1000};
    //first the number will be initialize to 1000
    //then after it it get plus one
    //for the second time you call the function
    //the number variable be last one that you call it which 
    //was 1001 becuase it got another value in to it now 
    //it will get run again and get 1002
    cout<<"the number is: "<<number<<endl;
    number += 1;
    cout<<"the number after plus one: "<<number<<endl;
}

int main(){
    
    static_local_example();
    static_local_example();
    
    return 0;
}
