#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int *p;
    
    cout<<"value of p is: "<<p<<endl;
    
    cout<<"Address of p is: "<<&p<<endl;
    
    cout<<"size of p is: "<<sizeof(p)<<endl;
    
    p = nullptr;
    
    cout<<"value of p is: "<<p<<endl;

    int *pointer_int{nullptr};
    int varible_int{};
    double *pointer_double{nullptr};
    double variable_double{};
    float *pointer_float{nullptr};
    float variable_float{};
    string *pointer_string{nullptr};
    string variable_string{};
    vector<string> *pointer_names_string{nullptr};
    vector<string> variable_vector_string{};
    
    cout<<"\nsize of int pointer: "<<sizeof(pointer_int)<<endl;
    cout<<"size of int: "<<sizeof(varible_int)<<endl;
    
    cout<<"\nsize of double pointer: "<<sizeof(pointer_double)<<endl;
    cout<<"size of double: "<<sizeof(variable_double)<<endl;
    
    cout<<"\nsize of float pointer: "<<sizeof(pointer_float)<<endl;
    cout<<"size of float: "<<sizeof(variable_float)<<endl;
    
    cout<<"\nsize of string pointer: "<<sizeof(pointer_string)<<endl;
    cout<<"size of string: "<<sizeof(variable_string)<<endl;
    
    cout<<"\nsize of vector of string pointer: "<<sizeof(pointer_names_string)<<endl;
    cout<<"size of vector of string: "<<sizeof(variable_vector_string)<<endl;
    
    
    
    
    return 0;
}
