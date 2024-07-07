#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    std::string last_name;
public:
    Person(std::string name="", std::string last_name = "");
    Person(const Person &person);
    void set_name(std::string name);
    void set_last_name(std::string last_name);
    std::string get_name()const;
    std::string get_last_name()const ;
    ~Person();
};

#endif // _PERSON_H_
