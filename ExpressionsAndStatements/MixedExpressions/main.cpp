#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    
    int total{};
    int num1{},num2{},num3{};
    const int count{3};
    
    cout<<"Enter 3 integers separated by spaces: ";
    cin>>num1>>num2>>num3;
    total = num1+num2+num3;
    
    double average;
    
    average = static_cast<double>(total)/count;

    cout<<"the total is: "<<total<<endl;
    cout<<"the average is: "<<average<<endl;
    
    
    
    return 0;
}
