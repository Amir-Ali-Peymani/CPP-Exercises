#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>

class Person
{
private:
    std::string name;
    std::string last_name;
public:
    Person(std::string name = {""}, std::string last_name={""});
    void set_name(std::string name);
    void set_last_name(std::string last_name);
    std::string get_name();
    std::string get_last_name();
    ~Person();

};

#endif // _PERSON_H_
