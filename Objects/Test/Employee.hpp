#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include "Person.hpp"
#include <vector>
#include <string>
#include <iostream>

class Employee
{
private:
    std::vector<Person> persons;
public:
    Employee();
    void add_person(Person person);
    void add_exam(std::string name, std::string last_name);
    void find_person(std::string last_name);
    void delet_person(std::string last_name);
    void display();
    ~Employee();

};

#endif // _EMPLOYEE_H_
