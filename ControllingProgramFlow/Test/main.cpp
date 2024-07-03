#include <iostream>
#include <vector>

using namespace std;

int main(){
    int large{};
    int small{};
    vector<int> numbers{3333,33,44,28, 24,55,444};
    for(auto number: numbers){
        cout<<number<<endl;
    }

    for( auto number: numbers){
        if(large<number){
            large=number;
        }
    }
    for(auto number: numbers){
        if(small>number){
            small = number;
        }else if(small == 0){
            small = number;
        }
    }
    cout<<"smallest number is: "<<small<<endl;
    cout<<"large number is: "<<large<<endl;
    
    return 0;
}
