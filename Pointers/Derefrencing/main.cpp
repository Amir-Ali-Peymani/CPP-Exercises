#include <iostream>
#include <string>
#include <vector>



using namespace std;

int main(){
    int score{200};
    int *pointer = &score;
    cout<<"*pointer: "<<*pointer<<endl;
    
    
    *pointer = 100;
    
    cout<<"after initializing.."<<endl;
    cout<<"*pointer: "<<*pointer<<endl;
    cout<<"score: "<<score<<endl;

    cout<<"====================================="<<endl;
    
    double high_temp{100.4};
    double low_temp{22.4};
    double *temp_ptr {&high_temp};
    
    cout<<*temp_ptr<<endl;
    temp_ptr = &low_temp;
    cout<<*temp_ptr<<endl;
    *temp_ptr = {333};
    cout<<low_temp<<endl;
    
    cout<<"====================================="<<endl;
    string name{"amir ali"};
    string *pointer_name {&name};
    
    cout<<*pointer_name<<endl;
    *pointer_name={"amir ali peymani"};
    cout<<name<<endl;
    
    
    cout<<"====================================="<<endl;
    vector<string> names {"amir ali", "anakin skywalker", "ct-7567"};
    vector<string> *pointer_vector;
    
    pointer_vector = &names;
    
    cout<<(*pointer_vector).at(0)<<endl;
    
    
    for(auto name: *pointer_vector){
        cout<<"names are: "<<name<<endl;
    }
    
    
    
    
    
    return 0;
}
