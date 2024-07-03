#include <iostream>

using std::cout;
using std::cin;
using std::boolalpha;
using std::endl;

int main(){
    bool equal_result{false};
    bool not_equal_result{false};
    
    int num1{}, num2{};
    
    cout<<boolalpha;
    
    cout<<"enter two integers separated by a space: ";
    cin>>num1>>num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 == num2);
    cout<<"Comparision result (equal): "<<equal_result<<endl;
    cout<<"Comparision result (not equals): "<<not_equal_result<<endl;
    
    
    return 0;
}
