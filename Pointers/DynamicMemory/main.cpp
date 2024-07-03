#include <iostream>

using namespace std;

int main(){
    size_t size;
    int *pointer{nullptr};
    cout<<"how many: ";
    
    cin>>size;
    
    pointer = new int[size];
    cout<<*pointer<<endl;
    cout<<pointer<<endl;
    delete [] pointer;
    pointer = {nullptr};
    
    return 0;
}
