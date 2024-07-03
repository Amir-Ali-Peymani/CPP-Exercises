#include "Mystring.hpp"
#include <iostream>
#include <cstring>


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

std::ostream &operator<<(std::ostream &os, const Mystring &mystring){
    os<<mystring.str;
    return os;
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
        delete [] str;
        str = new char[strlen(mystring.str)+1];
        str = mystring.str;
        mystring.str = nullptr;
        return *this;
    }
}

std::istream &operator>>(std::istream &in, Mystring &mystring){
    char *buff = new char[1000];
    in >>buff;
    mystring = Mystring{buff};
    delete []buff;
    return in;
}

void Mystring::display(){
    std::cout<<str<<" : "<<get_length()<<std::endl;
}

int Mystring::get_length(){
    return strlen(str);
}

const char *Mystring::get_str(){
    return str;
}

Mystring::~Mystring()
{
    delete [] str;
}

