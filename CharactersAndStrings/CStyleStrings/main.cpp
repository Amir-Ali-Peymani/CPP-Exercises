#include <iostream>
//c-style strings
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    
    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];
    
    //cout<<first_name;


//    cout<<"please enter your first name: ";
//    cin>>first_name;
//    
//    cout<<"please enter your last name: ";
//    cin>>last_name;
//    
//    cout<<"your name has "<<strlen(first_name)<<" characters"<<endl;
//    cout<<"your last name has "<<strlen(last_name)<<" character"<<endl;
//    
//    
//    strcpy(full_name, first_name); //copying first name to full name the right arguments go to the left one
//    strcat(full_name, " ");    //concatinating(matching) the empty string to the end of the first name
//    strcat(full_name, last_name);//concatinatin(matching) the last name to the end of the name
//    
//    cout<<"your full name is: "<<full_name;
    
    
//    cout<<"enter your full name: ";
//    cin.getline(full_name, 50);// we are telling that it can read about 50 characters long after that
//    cout<<full_name;
//    

    cout<<"enter your full name: ";
    cin.getline(full_name, 50);
    cout<<"your full name is: "<<full_name<<endl;
    
    
    strcpy(temp, full_name);
    
    if(strcmp(temp, full_name)==0) // strcmp is use for checking that if they are the same or not 0 means are the sam 
        cout<<temp<<" and "<<full_name<<" are the same"<<endl;
    else
        cout<<temp<<" and "<<full_name<<" are the same"<<endl;
                                                                                                                
    for(size_t i{0}; strlen(full_name);++i){
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout<<"your full name is"<<full_name<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
