#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string s1 = "hello there general kenobi";
    string word{};
    
    cout<<"Enter you word to find";
    cin>>word;
    
    size_t position = s1.find(word);
    if(position != string::npos){
        cout<<"found "<<word<<" at position"<<position<<endl;
    }else{
        cout<<"sorry "<<word<<" at positon"<<position<<endl;
        
    }
    
    
    
    
    
    return 0;
}
