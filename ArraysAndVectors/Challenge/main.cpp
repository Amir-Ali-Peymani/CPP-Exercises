#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(){
    vector<int> vector1;
    vector<int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"elements in the vector one:"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"size of the vector one:"<<vector1.size()<<endl;
    cout<<"==============================="<<endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"elements in the vector two:"<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"size of the vector two: "<<vector2.size()<<endl;
    cout<<"==============================="<<endl;
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<"==============================="<<endl;
    cout<<"2D vector elements are:"<<endl;
    cout<<vector_2d.at(0).at(0)<<endl;
    cout<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<endl;
    cout<<vector_2d.at(1).at(1)<<endl;
    
    
    vector1.at(0)={1000};    
    cout<<"==============================="<<endl;
    cout<<"showing again the 2D vector"<<endl;
    cout<<vector_2d.at(0).at(0)<<endl;
    cout<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<endl;
    cout<<vector_2d.at(1).at(1)<<endl;
    cout<<"==============================="<<endl;
    cout<<"showing the vector one: "<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    
    
    
    
    
    
    return 0;
}
