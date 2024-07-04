#include <iostream>
#include <vector>

using namespace std;

class Shape{
public:
    virtual void length()=0;
    virtual void high()=0;
    virtual ~Shape(){};
};

class Circle:public Shape{
    virtual void length()override{
        cout<<"this is the length of the circle"<<endl;
    }
    virtual void high()override{
        cout<<"this is the high of the circle"<<endl;
    }
    ~Circle(){};
};

class Square:public Shape{
    virtual void length()override{
        cout<<"this is the length of the square"<<endl;
    }
    virtual void high()override{
        cout<<"this is the high of the square"<<endl;
    }
    ~Square(){};
};

int main(){
    Shape *circle = new Circle();
    Shape *square = new Square();
    
    vector<Shape*> shapes{circle, square};
    
    delete circle;
    delete square;
    
    return 0;
}
