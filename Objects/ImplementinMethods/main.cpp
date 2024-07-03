#include <iostream>
#include <string>
#include <Person.hpp>

using namespace std;

int main(){
    Person *person = new Person();

    (*person).setName("commander rex");
    (*person).setLastName("ct-7567");
    (*person).setAge(30);
    
    cout<<(*person).getName()<<endl;
    cout<<(*person).getLastName()<<endl;
    cout<<(*person).getAge()<<endl;
    Person *person_one = new Person("","peymani",4);
    cout<<person_one->getName()<<endl;
    cout<<person_one->getLastName()<<endl;
    cout<<person_one->getAge()<<endl;

    delete person_one;
    delete person;

    return 0;
}
