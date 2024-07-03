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
        delete [] str;
        str = mystring.str;
        mystring.str = nullptr;
        return *this;
    }
}

void Mystring::display()const{
    std::cout<<str<<" : "<<get_length()<<std::endl;
}

int Mystring::get_length() const {return strlen(str);}
const char *Mystring::get_str() const{return str;}

Mystring operator-(const Mystring &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (size_t i=0; i<std::strlen(buff); i++) 
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

Mystring::~Mystring()
{
}

