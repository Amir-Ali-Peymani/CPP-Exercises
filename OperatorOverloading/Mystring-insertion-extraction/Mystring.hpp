#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &mystring);
    friend std::istream &operator>>(std::istream &in, Mystring &mystring);
private:
    char *str;
public:
    Mystring(const char *s=nullptr);
    Mystring(Mystring &mystring);
    
    Mystring &operator=(const Mystring &mystring);
    Mystring &operator=(Mystring &&mystring);
    
    void display();
    
    int get_length();
    
    const char *get_str();
    
    ~Mystring();

};

#endif // _MYSTRING_H_
