#include <iostream>
#include <string>

using namespace std;

int main(){
    string names [] {"ct-7567", "ct-5385", "cc-4477"};
    
    string *pointer{names};
    
    //pointer = names;
//    
//    cout<<pointer<<endl;
//    cout<<++pointer<<endl;
//    pointer += 2;
//    cout<<(pointer+=2)<<endl;

    while(*pointer != "cc-4477"){
        cout<<*pointer<<endl;
        pointer++;
    }
    cout<<*pointer<<endl;
    cout<<"===================="<<endl;
    pointer={names};
    while(*pointer!="cc-4477"){
        cout<<*pointer++<<endl;
    }
    cout<<"===================="<<endl;
    char name[]{"amir ali"};
    
    char *chr_one{nullptr};
    char *chr_two{nullptr};
    
    chr_one = &name[0];
    chr_two = &name[6];
    
    cout<<"in your name: "<<name<<" character "<<*chr_one<<" is about "<<(chr_two-chr_one)<<" away form "<<*chr_two<<endl;
    
    return 0;
}
