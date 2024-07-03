#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(vector<string> const * const);

void display(vector<string> const * const serial_numbers){
    for(auto number: *serial_numbers){
        cout<<number<<endl;
    }
}


int main(){
    vector<string> serial_numbers{"ct-7567", "ct-5385","cc-4477"};
    vector<string> *pointer{nullptr};
    pointer = &serial_numbers;
    display(pointer);
    display(&serial_numbers);
    
    return 0;
}
