#include <iostream>

using namespace std;

int calculate_sum(int num1, int num2=11, int num3=44);

int calculate_sum(int num1, int num2, int num3){
    return num1+num2+num3;
}


int main(){
    cout<<calculate_sum(33, 0,0);
    
    return 0;
}
