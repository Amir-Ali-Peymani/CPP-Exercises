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
        delete [] str;
        str = mystring.str;
        mystring.str = nullptr;
        return *this;
    }
}

Mystring Mystring::operator-()const{
    char *buff;
    buff = new char[strlen(str)+1];
    strcpy(buff, str);
    for(size_t i=0; i<strlen(buff);++i){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp {buff};
    delete []buff;
    return temp;
}

bool Mystring::operator==(const Mystring &mystring)const{
    return (strcmp(str, mystring.str) == 0);
}

Mystring Mystring::operator+(const Mystring &mystring){
    char *buff = new char[(strlen(mystring.str)+1)+(strlen(str)+1)];
    strcpy(buff, str);
    strcat(buff, mystring.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

void Mystring::display()const{
    std::cout<<str<<" : "<<get_length()<<std::endl;
}

int Mystring::get_length() const {return strlen(str);}
const char *Mystring::get_str() const{return str;}

Mystring::~Mystring()
{
}

