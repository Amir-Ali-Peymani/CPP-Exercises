#include <Person.hpp>

Person::Person(std::string name, std::string last_name)
{
    this->name = name;
    this->last_name = last_name;
}

Person::Person(const Person &person){
    this->name = person.name;
    this->last_name = person.last_name;
}

void Person::set_name(std::string name){
    this->name = name;
}

void Person::set_last_name(std::string last_name){
    this->last_name = last_name;
}

std::string Person::get_name()const{
    return this->name;
}

std::string Person::get_last_name() const{
    return this->last_name;
}
Person::~Person()
{
}

