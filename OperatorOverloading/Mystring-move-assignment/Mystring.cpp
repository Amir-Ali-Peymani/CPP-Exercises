#include "Mystring.hpp"
#include <cstring>

Mystring::Mystring()
{
}

Mystring::Mystring(const char *s){
    if(s==nullptr){
        str = new char[1];
        *str = '\0';
    }else{
        str = new char[strlen(s)+1];
        strcpy(str, s);
    }
}

Mystring::Mystring(Mystring &mystring){
    str = new char[strlen(mystring.str)+1];
    strcpy(str, mystring.str);
}

Mystring &Mystring::operator=(const Mystring &mystring){
    if(this==&mystring){
        return *this;
    }
    delete [] str;
    str = new char[strlen(mystring.str)+1];
    strcpy(str, mystring.str);
    return *this;
}

Mystring &Mystring::operator=(Mystring &&mystring){
    if(this==&mystring){
        return *this;
    }
    delete [] str;
    str = mystring.str;
    mystring.str = nullptr;
    return *this;
}

Mystring::~Mystring()
{
}

