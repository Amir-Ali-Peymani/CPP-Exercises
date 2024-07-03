#include <iostream>

using namespace std;

int main(){
    
    enum Direction{
        left, up, right, down
    };
    
    Direction direction{left};
    
    switch(direction){
        case left:
            cout<<" left";
            break;
        case right:
            cout<<"right";
            break;
//        case up:
//            cout<<"up";
//            break;
//        case down:
//            cout<<"down";
//            break;
    }
    

    return 0;
}
