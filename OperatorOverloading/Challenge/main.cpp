#include <iostream>
#include <Mystring.hpp>

using namespace std;

int main(){
    cout<<boolalpha<<endl;
    Mystring a{"frank"};
    
    Mystring b{"frank"};
    
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    
    b = "goerge";
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a>b)<<endl;
    
    Mystring s1 {"FRANK"};
    s1 = -s1;
    cout<<s1<<endl;
    
    s1 = s1+"*********";
    cout<<s1<<endl;
    
    s1 += "--------------";
    cout<<s1<<endl;
    
    Mystring s2{"12345"};
    s2 *= 5;
    cout<<s2<<endl;
    
    Mystring s3{"abcndd"};
    s3 *= 4;
    cout<<s3<<endl;
    
    Mystring s{"LARRY"};
    s = -s;
    cout<<s<<endl;
    
    
    return 0;
}
