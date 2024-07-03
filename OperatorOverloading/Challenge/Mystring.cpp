#include "Mystring.hpp"
#include <cstring>
#include <sstream>
#include <string>
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Mystring& mystring){
    os<<mystring.str;
    return os;
}

std::istream &operator>>(std::istream &in, Mystring &mystring){
    char *buff = new char[1000];
    in >>buff;
    mystring = Mystring{buff};
    delete []buff;
    return in;
}

Mystring::Mystring(const char *s)
{
    if(s == nullptr){
        str = new char[1];
        *str = '\0';
    }else{
        str = new char[strlen(s)+1];
        strcpy(str, s);
    }
}

Mystring::Mystring( Mystring &mystring): str{nullptr}{
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
        str = new char[strlen(mystring.str)+1];
        str = mystring.str;
        mystring.str = nullptr;
        return *this;
    }
}

Mystring operator-(const Mystring &mystring){
    char *buff = new char[strlen(mystring.str)+1];
    strcpy(buff, mystring.str);
    for (size_t i=0; i<strlen(buff);i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

bool operator==(const Mystring &mystring1, const Mystring &mystring2){
    return (strcmp(mystring1.str, mystring2.str)==0);
}

bool operator!=(const Mystring &mystring1, const Mystring &mystring2){
    return (strcmp(mystring1.str, mystring2.str)!=0);
}

bool operator<(const Mystring &mystring1, const Mystring &mystring2){
    int size1= strlen(mystring1.str);
    int size2= strlen(mystring2.str);
    if(size1<size2){
        return true;
    }else{
        return false;
    }
}

bool operator>(const Mystring &mystring1, const Mystring &mystring2){
    int size1 = strlen(mystring1.str);
    int size2 = strlen(mystring2.str);
    if(size1>size2){
        return true;
    }else{
        return false;
    }
}

Mystring operator+(const Mystring &mystring1, const Mystring &mystring2){
    char *buff = new char[strlen(mystring1.str)+strlen(mystring2.str)];
    strcpy(buff, mystring1.str);
    strcat(buff, mystring2.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

Mystring operator+=( Mystring &mystring, const Mystring &mystring2){
    mystring = mystring + mystring2;
    return mystring;
}

Mystring operator*(const Mystring &mystring1,const int &times){
    char *buff = new char[times*strlen(mystring1.str)];
    for(int i=0; i<times; ++i){
        strcat(buff, mystring1.str);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring operator*=( Mystring &mystring1,const int &times){
    mystring1 = mystring1 * times;
    return mystring1;
//these are not true and you can use the already made function
//    char *buff = new char[times*strlen(mystring1.str)];
//    for(int i=0; i<times; ++i){
//        strcat(buff, mystring1.str);
//   }
//    strcpy(mystring1.str,buff);
//    Mystring temp {mystring1.str};
//    delete [] buff;
//    return temp;
}

void Mystring::display(){
    std::cout<<str<<" : "<<get_length()<<std::endl;
}

int Mystring::get_length(){
    return strlen(str);
}

Mystring::~Mystring()
{
    delete []str;
}

