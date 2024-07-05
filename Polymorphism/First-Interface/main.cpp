#include <iostream>

using namespace std;

class Printable{
    friend std::ostream &operator<<(std::ostream &os, const Printable &obj); 
public:
    virtual void print(std::ostream &os) const = 0;
};
std::ostream &operator<<(std::ostream &os,const Printable &obj){
    obj.print(os);
    return os;
}
class Account:public Printable{
    void print(ostream &os) const override{
        os<<"account display";
    }
};
int main(){
    Account account;
    cout <<account<< endl;
    return 0;
}
