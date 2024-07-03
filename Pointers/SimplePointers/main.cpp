#include <iostream>

using namespace std;

int main(){
    
//    int score{10};
//    double high_temp{100.8};
//    
//    int *score_ptr{nullptr};
//    
//    score_ptr = &score;
//    cout<<"value of score is: "<<score<<endl;
//    cout<<"address of score is: "<<&score<<endl;
//    cout<<"value of score_ptr is: "<<score_ptr<<endl;
//    
    //score_ptr = &high_temp; // compile error beacue of the type differences
    
    int number{10}; 
    int *pointer = &number;
    cout<<"pointer: "<<pointer<<endl;
    cout <<"*pointer: "<<*pointer<<endl;
    
    return 0;
}
