#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> num{33,44,55,4,2,11};
    for(unsigned number{0}; number<num.size(); ++number){
        cout<<num[number]<<endl;
    }
    

    return 0;
}
