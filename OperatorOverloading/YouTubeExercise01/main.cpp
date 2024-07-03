#include <iostream>
#include <string>

using namespace std;

struct Vector2{
    float x, y;
    
    Vector2(float x=0, float y=0): x(x), y(y){}
    
    Vector2 Add(const Vector2 &vector2) const{
        return Vector2(x + vector2.x, y + vector2.y);
    }
    
    Vector2 Multioply(const Vector2 &vector2) const{
        return Vector2(x*vector2.x, y*vector2.y);
    }
    
    Vector2 operator+(const Vector2 &vector2)const{
        return Vector2(x + vector2.x, y + vector2.y);
    }
    
    Vector2 operator*(const Vector2 &vector2)const{
        return Vector2(x*vector2.x, y*vector2.y);
    }
    
//    void operator<<(const Vector2 &vector2) const {
//        cout<<vector2.x<<endl;
//        cout<<vector2.y<<endl;
//    }
    
};

ostream& operator<<(ostream &stream, const Vector2 &vector2){
    stream<<vector2.x<<" "<<vector2.y<<endl;
    return stream;
}
int main(){
    Vector2 class_one = { 22.3f, 33.3f};
    Vector2 class_two = {33.3f, 3.3f};
    
    
    Vector2 class_three = class_two.Multioply(class_one.Add(class_two));
    Vector2 class_four= class_two * class_one + class_two;
    
    cout<<class_one<<endl;
    
    return 0;
}
