#include <iostream>

using namespace std;

int main(){
    
    int nums[]{33, 10, 22, 45};
    
    for(auto num: nums){
        cout<<num<<endl;
    }
    
    for(auto charecter:"hello there"){
        if (charecter!=' ')
            cout<<charecter;
    }
    

    return 0;
}
