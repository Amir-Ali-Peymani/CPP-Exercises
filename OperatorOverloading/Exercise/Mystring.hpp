#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend  Mystring operator-(const Mystring &mystring) ;
private:
    char *str;
public:
    Mystring(const char *s = nullptr);
    Mystring(const Mystring &mystring);
    
    Mystring &operator=(const Mystring &mystring);
    
    Mystring &operator=(Mystring &&mystring);
    
   
    
    bool operator==(const Mystring &mystring) const;
    
    void display();
    
    int get_length()const ;
    
    const char *get_str() const;
    
    ~Mystring();

};

#endif // _MYSTRING_H_
