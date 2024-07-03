#include "Employee.hpp"

Employee::Employee()
{
}

void Employee::add_person(Person person){
    persons.push_back(person);
}

void Employee::add_exam(std::string name, std::string last_name){
    Person person;
    person.set_name(name);
    person.set_last_name(last_name);
    persons.push_back(person);
}

void Employee::find_person(std::string last_name){
    for(auto person:persons){
        if(person.get_last_name()==last_name){
            std::cout<<"--name: "<<person.get_name()<<" last name: "<<person.get_last_name()<<std::endl;
        }
    }
    std::cout<<"person does not exist"<<std::endl;
}

void Employee::delet_person(std::string last_name){
    for(auto person:persons){
        if(person.get_last_name()==last_name){
            persons.std::remove(person);
            return;
        }
    }
    std::cout<<"person does not exist!!"<<std::endl;
}

Employee::~Employee()
{
}

