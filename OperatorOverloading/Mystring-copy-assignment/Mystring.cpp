#include "Mystring.hpp"
#include "cstring"
#include <iostream>

//Mystring::Mystring()
//    : str{nullptr}{
//    str = new char[1];
//    *str =  '\0';
//}

Mystring::Mystring(const char *s)
{
    if(s==nullptr){
        str= new char[1];
        *str = '\0';
    }else{
        str=new char[strlen(s)+1];
        strcpy(str, s);
    }
}

Mystring::Mystring(const Mystring &mystring): str(nullptr){
    str = new char[strlen(mystring.str)+1];
    strcpy(str, mystring.str);
}

Mystring &Mystring::operator=(const Mystring &mystring){
    if(this== &mystring){
        return *this;
    }
    delete [] str;
    str = new char[std::strlen(mystring.str)+1];
    std::strcpy(str, mystring.str);
    return *this;
}

Mystring::~Mystring()
{
    delete [] str;
}

