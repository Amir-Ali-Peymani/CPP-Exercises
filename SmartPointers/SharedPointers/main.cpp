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
    ~Person(){std::cout<<"Person destructor"<<std::endl;};
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

std::vector<std::unique_ptr<Person>> persons_unique;
std::vector<std::shared_ptr<Person>> persons_shared;

void save_peron_unique(std::unique_ptr<Person> person){
    persons_unique.push_back(std::move(person));
}

void save_person_shared(std::shared_ptr<Person> person){
    persons_shared.push_back(person);
}

void display_unique(){
    for (const auto &person:persons_unique){
        std::cout<<person->get_name()<<std::endl;
        std::cout<<person->get_last_name()<<std::endl;
    }
}

void display_shared(){
    for (auto person:persons_shared){
        std::cout<<person->get_name()<<std::endl;
//        std::cout<<person->get_last_name()<<std::endl;
    }
}

void edit_person_unique(){
    for (auto person:persons_shared){
        person->set_name("cc-4477");
    }
}

int main(){
    std::unique_ptr<Person> person_unique = std::make_unique<Person>();
    std::shared_ptr<Person> person_shared = std::make_shared<Person>();
    
    person_unique->set_name("amir ali in unique");
    person_unique->set_last_name("peymani in unique");
    save_peron_unique(std::move(person_unique));
    //display_unique();
    std::cout<<"===================================="<<std::endl;
    person_shared->set_name("amir ali in shared");
    person_shared->set_last_name("amir ali in shared");
    save_person_shared(person_shared);
    
    display_shared();
    edit_person_unique();
    display_shared();
    
    
    
    return 0;
}
