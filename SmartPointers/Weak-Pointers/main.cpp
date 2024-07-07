#include <iostream>
#include <string>
#include <memory>
#include <vector>

class Person;

class Subject{
private:
    std::string subject_name;
    std::vector<std::weak_ptr<Person>> persons;
public:
    Subject(std::string subject_name ="");
    Subject(const Subject &subject);
    void set_subject_name(std::string subject_name);
    std::string get_subject_name();
};

Subject::Subject(std::string name){
    this->subject_name= name;
    
}

Subject::Subject(const Subject &subject){
    this->subject_name = subject.subject_name;
    this->persons = subject.persons;
}

void Subject::set_subject_name(std::string subject_name){
    this->subject_name = subject_name;
}

std::string Subject::get_subject_name(){
    return this->subject_name;
}

class Person{
private:
    std::string name;
    std::vector<std::shared_ptr<Subject>> subjects;
public:
    Person(std::string name="");
    Person(const Person &person);
    std::string get_name();
    void set_name(std::string name);
    void set_subjects(std::vector<std::shared_ptr<Subject>> subjects);
    std::vector<std::shared_ptr<Subject>> get_subjects();
};

Person::Person(std::string name){
    this->name = name;
}

Person::Person(const Person &person){
    this->name= person.name;
}

std::vector<std::shared_ptr<Subject>> Person::get_subjects(){
    return this->subjects;
}

void Person::set_subjects(std::vector<std::shared_ptr<Subject>> subjects){
    this->subjects = subjects;
}


void Person::set_name(std::string name){
    this->name= name;
}

std::string Person::get_name(){
    return this->name;
}


int main(){
    
    
    std::shared_ptr<Subject> math = std::make_shared<Subject>();
    math->set_subject_name("math");
    std::shared_ptr<Subject> english = std::make_shared<Subject>();
    english->set_subject_name("english");
    std::vector<std::shared_ptr<Subject>> subjects;
    subjects.push_back(math);
    subjects.push_back(english);
    std::shared_ptr<Person> person = std::make_shared<Person>();
    person->set_name("amir ali");
    person->set_subjects(subjects);
    
    
    
    return 0;
}
