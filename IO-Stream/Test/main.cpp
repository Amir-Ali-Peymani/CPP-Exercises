#include <iostream>
#include <memory>
#include <fstream>
#include <list>
#include <Person.hpp>
#include <string>

std::list<std::shared_ptr<Person>> persons_list;


void save_person(){
    std::ofstream save_file;
    save_file.open("D:\\Projects\\C++\\Course\\IO-Stream\\Test\\person.txt", std::ios::app);
    std::unique_ptr<Person> person = std::make_unique<Person>();
    person->set_name("ct-7567");
    person->set_last_name("clone trooper rex");
    if(!save_file){
        std::cerr<<"there is no such file!!";
        return;
    }else{
        save_file<<person->get_name()<<std::endl;
        save_file<<person->get_last_name()<<std::endl;
    }
    save_file.close();
}

void edit_person(){
    std::ofstream edit_file;
    edit_file.open("D:\\Projects\\C++\\Course\\IO-Stream\\Test\\person.txt", std::ios::trunc);
    std::string name{"amir ali"};
    for(const auto &person:persons_list){
        if(person->get_name()==name){
            person->set_last_name("delete time");
        }
    }
    for(const auto &person:persons_list){
        edit_file<<person->get_name()<<std::endl;
        edit_file<<person->get_last_name()<<std::endl;
    }
}

void read_file(){
    std::ifstream read_file;
    std::string line{};
    read_file.open("D:\\Projects\\C++\\Course\\IO-Stream\\Test\\person.txt");
    while(std::getline(read_file, line)){
        std::shared_ptr<Person> person = std::make_shared<Person>();
        person->set_name(line);
        if(std::getline(read_file, line)){
            person->set_last_name(line);
        }
        persons_list.push_back(person);
    }
    read_file.close();
}

void delete_person(){
    std::ofstream edit_file;
    edit_file.open("D:\\Projects\\C++\\Course\\IO-Stream\\Test\\person.txt", std::ios::trunc);
    std::string name{"amir ali"};
    for(auto &person:persons_list){
        if(person->get_name()==name){
            persons_list.remove(person);
            break;
        }
    }
    for(const auto &person:persons_list){
        edit_file<<person->get_name()<<std::endl;
        edit_file<<person->get_last_name()<<std::endl;
    }
}

void update_person(){
    
}

int main(){
//    save_person();
    read_file();
    for(const auto &person:persons_list){
        std::cout<<person->get_name()<<std::endl;
        std::cout<<person->get_last_name()<<std::endl;
        std::cout<<person.use_count()<<std::endl;
        std::cout<<"================================"<<std::endl;
    }
    edit_person();
    std::cout<<"============AFTEREDIT=============="<<std::endl;
    for(const auto &person:persons_list){
        std::cout<<person->get_name()<<std::endl;
        std::cout<<person->get_last_name()<<std::endl;
        std::cout<<person.use_count()<<std::endl;
        std::cout<<"================================"<<std::endl;
    }
    delete_person();
    std::cout<<"============AFTERDELETE============"<<std::endl;
    for(const auto &person:persons_list){
        std::cout<<person->get_name()<<std::endl;
        std::cout<<person->get_last_name()<<std::endl;
        std::cout<<person.use_count()<<std::endl;
        std::cout<<"================================"<<std::endl;
    }
    return 0;
}
