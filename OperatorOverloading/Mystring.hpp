#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private: 
    char *str;
public:
    Mystring(const char *s=nullptr);
    Mystring(Mystring &mystring);
    
    Mystring operator=(const Mystring &mystring);
    Mystring operator=(Mystring &&mystring);
    
    std::ostream operator<<(std::ostream &os, const Mystring &mystring);
    
    std::istream operator>>(std::istream &in, Mystring &mystring);
    
    ~Mystring();

};

#endif // _MYSTRING_H_
