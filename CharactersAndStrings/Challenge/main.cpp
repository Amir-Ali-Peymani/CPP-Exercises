#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string alphabetic {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxnznlwebgjhqdvtkfuompciasr"};
    
    cout<<"Enter you message: ";
    string message{};
    getline(cin, message);
    
    int index_alphabet{};
    int index_key{};

    string encrypt{};
    cout<<"\nEncrypting message ....\n"<<endl;
    for(auto chm: message){
        if(alphabetic.find(chm)!=string::npos){
            index_alphabet = alphabetic.find(chm);
            encrypt.push_back(key[index_alphabet]);
        }else{
            encrypt.push_back(chm);
        }
    }
    
    cout<<"\nEncrypted message is: "<<encrypt<<endl;
    
    cout<<"\nDecrypting message ....\n"<<endl;
    string new_message{};
    for(auto chk:encrypt){
        if(key.find(chk)!= string::npos){
            index_key = key.find(chk);
            new_message.push_back(alphabetic[index_key]);
        }else{
            new_message.push_back(chk);
        }
    }
    cout<<"\nDecrypted message is: "<<new_message<<endl;
    
    

    return 0;
}
