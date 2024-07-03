#include "Mystring.hpp"
#include <cstring>
#include <iostream>


Mystring::Mystring(const char *s)
{
    if(s==nullptr){
        str = new char[1];
        *str = '\0';
    }else{
        str = new char[strlen(s)+1];
        strcpy(str, s);
    }
}

Mystring::Mystring(const Mystring &mystring): str{nullptr}{
    str = new char[strlen(mystring.str)+1];
    strcpy(str, mystring.str);
}

Mystring &Mystring::operator=(const Mystring &mystring){
    if(this==&mystring){
        return *this;
    }else{
        delete [] str;
        str = new char[strlen(mystring.str)+1];
        strcpy(str, mystring.str);
        return *this;
    }
}

Mystring &Mystring::operator=(Mystring &&mystring){
    if(this==&mystring){
        return *this;
    }else{
        delete []str;
        str = new char[strlen(mystring.str)+1];
        str = mystring.str;
        mystring.str = nullptr;
        return *this;
    }
}

bool Mystring::operator==(const Mystring &mystring)const{
    return (strcmp(mystring.str, str)==0);
}

void Mystring::display(){
    std::cout<<str<<" : "<<get_length();
}


int Mystring::get_length() const {return strlen(str);}

const char *Mystring::get_str() const{return str;}


Mystring::~Mystring()
{
    delete [] str;
}

