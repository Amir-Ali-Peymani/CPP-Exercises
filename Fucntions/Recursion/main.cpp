#include <iostream>

using namespace std;

unsigned long long int function_factorial(long long int);

unsigned long long int function_factorial(long long int number){
    if(number==1){
        return 1;
    }
    return number * function_factorial(number-1);
}


int main(){
    long long int number{};
    number = function_factorial(35);
    cout<<number;
    return 0;
}
