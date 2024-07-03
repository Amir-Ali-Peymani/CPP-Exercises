//include guard tell the compiler that the file only included once
#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>

using namespace std;

class Person
{
private:
    string name;
    string last_name;
    int age;
public:
    Person(string name={""}, string last_name={""}, int age={});
    Person(const Person &person);
    void setName(string name);
    void setLastName(string last_name);
    void setAge(int age);
    string getName();
    string getLastName();
    int getAge();
    ~Person();

};

#endif // _PERSON_H_
