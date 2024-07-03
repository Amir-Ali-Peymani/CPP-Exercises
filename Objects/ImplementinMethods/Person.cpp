#include "Person.hpp"

using namespace std;

Person::Person(string name, string last_name, int age)
{
    this->name = name;
    this->last_name = last_name;
    this->age = age;
}

void Person::setName(string name){
    this->name = name;
}

void Person::setLastName(string last_name){
    this->last_name = last_name;
}

void Person::setAge(int age){
    this->age = age;
}

string Person::getName(){
    return this->name;
}

string Person::getLastName(){
    return this->last_name;
}

int Person::getAge(){
    return this->age;
}

Person::~Person()
{
}

