#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory>


class Person{
private:
    std::string name;
    std::string last_name;
public:
    Person(std::string name ="", std::string last_name ="");
    Person(const Person &person);
    void set_name(std::string name);
    void set_last_name(std::string last_name);
    std::string get_name();
    std::string get_last_name();
};


Person::Person(std::string name, std::string last_name){
    this->name=name;
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
    this->last_name =last_name;
}

std::string Person::get_name(){
    return this->name;
}

std::string Person::get_last_name(){
    return this->last_name;
}

void read_file_one(){
    std::string name;
    std::string last_name;
    std::ifstream file_person;
    file_person.open("D:\\Projects\\C++\\Course\\IO-Stream\\File-Reading-Writing\\person.txt");
    if(!file_person){
        std::cerr<<"there is no such file!!!";
    }else{
        while(!file_person.eof()){
            file_person>>name>>last_name;
            std::cout<<name<<std::endl;
            std::cout<<last_name<<std::endl;
        }
    }
    file_person.close();
}

void read_file_two(){
    std::string line;
    std::ifstream file_person;
    file_person.open("D:\\Projects\\C++\\Course\\IO-Stream\\File-Reading-Writing\\person.txt");
    if(!file_person){
        std::cerr<<"the file does not exist";
    }else{
        while(std::getline(file_person, line)){
            std::cout<<line<<std::endl;
        }
    }
    file_person.close();
}

void save_in_file(const std::string &name , const std::string &last_name){
    std::ofstream file_person;
    file_person.open("D:\\Projects\\C++\\Course\\IO-Stream\\File-Reading-Writing\\person.txt", std::ios::app);
    file_person<<name<<" "<<last_name<<std::endl;
    file_person.close();
}
int main(){
    std::unique_ptr<Person> person= std::make_unique<Person>();
    person->set_name("amir ali");
    person->set_last_name("peymani");
    std::unique_ptr<Person> student= std::make_unique<Person>();
    student->set_name("cc-4477");
    student->set_last_name("thorn");
    save_in_file(person->get_name(), person->get_last_name());
    save_in_file(student->get_name(), person->get_last_name());

    
    return 0;
}
