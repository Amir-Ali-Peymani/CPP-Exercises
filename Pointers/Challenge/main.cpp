#include <iostream>

using namespace std;

void display(const int *, size_t);

int *multiply_arrays(const int *, size_t, const int *, size_t);

void display(const int *array, size_t size){
    for(size_t i{0}; i<size;++i){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int *multiply_arrays(const int *array1, size_t size1, const int *array2, size_t size2){
    int *multiplye_array{nullptr};
    multiplye_array = new int[size1*size2];
    int size{};
    for(size_t i{0}; i<size1;++i){
        for(size_t j{0}; j<size2;++j){
            cout<<array1[i]*array2[j]<<" ";
            multiplye_array[size]={array1[i]*array2[j]};
            size ++;
        }
        cout<<endl;
    }
    
    return multiplye_array;
}


int main(){
    int array_one[]{1,2,3,4,5,6};
    int array_two[]{2,4,5,6};
    cout<<"arry one is: ";
    display(array_one,6);
    cout<<"\narray two is: ";
    display(array_two,4);
    int *array_multiply{nullptr};
    array_multiply = multiply_arrays(array_one,6,array_two,4);
    display(array_multiply, 24);
    delete[] array_multiply;
    
    
    
    
    
    return 0;
}
