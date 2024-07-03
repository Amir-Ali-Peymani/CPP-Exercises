#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char *str;
public:
    Mystring(const char *s=nullptr);
    Mystring(const Mystring &mystring);
    
    Mystring operator+(const Mystring &mystring);
    Mystring operator-()const ;//Mystring mystring = -mystrin3;
    
    bool operator==(const Mystring &mystring)const;
    
    Mystring &operator=(const Mystring &mystirng);//Mystring mystring = mystring1
    Mystring &operator=(Mystring &&mystring);//Mystring mystring = Mystring{"aas"};
    
    void display()const ;
    
    int get_length()const;
    
    const char *get_str() const;
    ~Mystring();

};

#endif // _MYSTRING_H_
