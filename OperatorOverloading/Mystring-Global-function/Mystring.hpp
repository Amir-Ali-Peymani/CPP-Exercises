#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend bool operator==(const Mystring &lhs,const Mystring &rhs);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &lhs);
private:
    char *str;
public:
 
    
    Mystring(const char *str=nullptr);
    
    Mystring(const Mystring &mystring);
    
    Mystring &operator=(const Mystring &mystirng);//Mystring mystring = mystring1
    Mystring &operator=(Mystring &&mystring);//Mystring mystring = Mystring{"aas"};

    void display()const ;
    int get_length()const;
    const char *get_str() const;
    
    ~Mystring();
};

#endif // _MYSTRING_H_
