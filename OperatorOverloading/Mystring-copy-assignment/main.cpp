#include <iostream>
#include "Mystring.hpp"

using namespace std;

int main(){
    Mystring a {"hello"};
    Mystring b;
    
    b = a;
    
    b = "fuck you";
    
    return 0;
}
