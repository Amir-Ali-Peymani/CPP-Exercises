#include <iostream>

using namespace std;

void print_arrys(const int numbers[], size_t size);
void set_array(int numbers[], size_t size, int value);

void print_arrays(const int numbers[], size_t size){
    for(size_t i{0}; i<size;++i){
        cout<<numbers[i]<<"  ";
    }
    cout<<endl;
}

void set_array(int numbers[], size_t size, int value){
    for(size_t i{0}; i<size;++i){
        numbers[i]=value;
    }
}

int main(){
    int numbers [] {3,4,5,3,32};
    print_arrays(numbers, 5);
    set_array(numbers, 5, 85);
    print_arrays(numbers, 5);
    return 0;
}
