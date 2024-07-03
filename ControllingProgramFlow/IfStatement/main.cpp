#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    const int number_min{10};
    const int number_max{100};
    
    cout<<"Enter the number: ";
    int given_number{};
    cin>>given_number;
    if(given_number > number_min){
        cout<<"number is greater than 10"<<endl;
    }
    if(given_number < number_max){
        cout<<"number is smaller than 100"<<endl;
    }
    if(given_number < number_max && given_number > number_min){
        cout<<"number is between the 10 and 100"<<endl;
    }
    if(given_number == number_max){
        cout<<"number is equal to 100"<<endl;
    }
    if(given_number == number_min){
        cout<<"number is equal to 10"<<endl;
    }
    
    
    
    return 0;
}
