#include <iostream>

using namespace std;

void display(const int *);

int *create_array(size_t, int);

void display(const int *numbers, int size){
    for(int i{0}; i<size;++i){
        cout<<numbers[i];
    }
    cout<<endl;
}

int *create_array(size_t size, int value){
    int *array{nullptr};
    array = {new int[size]};
    for(size_t i{0}; i<size;++i){
        array[i]=value;
    }
    return array;  
}

int main(){
    int *array{nullptr};
    
    array = create_array(10,3);
    
    display(array, 10);
    
    delete [] array;
    
    

   return 0;
}
