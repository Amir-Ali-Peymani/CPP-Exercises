#include <iostream>
#include <string>
#include <memory>
#include <vector>

class Person{
private:
    std::string name;
    std::string last_name;
public:
    Person(std::string name="", std::string last_name="");
    Person(Person &person);
    void set_name(std::string name);
    void set_last_name(std::string last_name);
    std::string get_name();
    std::string get_last_name();
    ~Person(){};
};

Person::Person(std::string name, std::string last_name){
    this->name = name;
    this->last_name = last_name;
}

Person::Person(Person &person){
    this->name = person.name;
    this->last_name = person.last_name;
}

void Person::set_name(std::string name){
    this-> name = name;
}

void Person::set_last_name(std::string last_name){
    this->last_name = last_name;
}

std::string Person::get_name(){
    return this->name;
}

std::string Person::get_last_name(){
    return this->last_name;
}

int main(){
    std::vector<std::unique_ptr<Person>> persons;
    
    std::unique_ptr<Person> person = std::make_unique<Person>();
    person->set_name("amir ali");
    person->set_last_name("peymani");
    
    persons.push_back(std::move(person));

    for (const auto &person:persons){
        std::cout<<person->get_name();
    }

    return 0;
}
