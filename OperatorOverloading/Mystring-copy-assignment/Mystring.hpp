#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char *str;
public:
//    Mystring();
    Mystring(const char *s=nullptr);
    Mystring(const Mystring &mystirng);
    Mystring &operator=(const Mystring &mystring);
    ~Mystring();

};

#endif // _MYSTRING_H_
