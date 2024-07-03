#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(const vector<string> *const );

void display(int *, int);

void multiply_number(int *);

void replace_numbers(int *, int *);

void display(const vector<string> *const v){
//    (*v).at(0)={"cc-2224"};
    for(auto name: *v){
        cout<<name<<endl;
    }    
//    v=nullptr;
    //*const v -> you can not change the pointer to point in sth else
    //const *v -> you can not change the deference of the pointer
}

void display(int *numbers, int number){
    while(*numbers!=number){
        cout<<*numbers++;
    }
}

void multiply_number(int *number){
    *number *= *number;
}

void replace_numbers(int *number1, int *number2){
    int temp{*number1};
    *number1 = {*number2};
    *number2 = {temp};
}

int main(){
    vector<string> names {"ct-7567", "ct-5385","cc-4477"};
    display(&names);
    
    int  numbers[]{33,44,42,45,-1};
    display(numbers, -1);
    
    int number{20};
    int number1{100}, number2{200};
    
    cout<<"number one is: "<<number1<<endl;
    cout<<"number two is: "<<number2<<endl;
    
    cout<<"============================"<<endl;
    replace_numbers(&number1, &number2);
    
    cout<<"number one after change is: "<<number1<<endl;
    cout<<"number two after change is: "<<number2<<endl;
    
    
    multiply_number(&number);
    
    cout<<number;
    
    return 0;
}
