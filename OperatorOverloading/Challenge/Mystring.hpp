#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &mystring);
    
    friend std::istream &operator>>(std::istream &in, Mystring &mystring);
    //(-) unary minus returns the lower case verso of the string object
    friend Mystring operator-(const Mystring &mystring);
    
    //(==) check if they are equal and return true if they are equal
    friend bool operator==(const Mystring &mystring1, const Mystring &mystring2);
    
    //(!=) check if they are not equal and reutun true if they are not equal
    friend bool operator!=(const Mystring &mystring1, const Mystring &mystring2);
    
    //(<) returns true if the lhs string is exactly lass than the rhs string
    friend bool operator<(const Mystring &mystring1, const Mystring &mystring2);
    
    //(>) returns true if the lhs string is excactly greater thant the rhs strin
    friend bool operator>(const Mystring &mystring1, const Mystring &mystring2);
    
    //(+) concatinate return the object of the concatinate object
    friend Mystring operator+(const Mystring &mystring1, const Mystring &mystring2);
    
    //(+=) concatinate the rhs string to the lhs string and stroe the resuls in lhs object
    //  s1+=s2; equavalien to s1 = s1+s2
    friend Mystring operator+=(Mystring &mystring1, const Mystring &mystring2);
    
    //(*) repeat results in a string that is copied n times
    friend Mystring operator*(const Mystring &mystring1, const int &times);
    
    //(*=) repeat the string on the lhs n times and store the result back in the lhs object
    friend Mystring operator*=( Mystring &mystring1, const int &times);
private:
    char *str;
public:
    Mystring(const char *s = nullptr);
    Mystring(Mystring &mystring);
    
    Mystring &operator=(const Mystring &mystring);
    Mystring &operator=(Mystring &&mystring);
    
    void display();
    
    int get_length();
    
    ~Mystring();

};

#endif // _MYSTRING_H_
