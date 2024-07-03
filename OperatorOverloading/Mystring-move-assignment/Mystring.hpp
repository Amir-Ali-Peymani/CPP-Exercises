#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(Mystring &mystring);
    Mystring &operator=(const Mystring &mystring);
    Mystring &operator=(Mystring &&mystring);
    ~Mystring();

};

#endif // _MYSTRING_H_
