#include <iostream>
#include <climits>

using std::cout;
using std::endl;

int main(){
    cout<<"char: "<<sizeof(char)<<" bytes"<<endl;
    cout<<"int: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"unsigned int: "<<sizeof(unsigned int)<<" bytes"<<endl;
    cout<<"short: "<<sizeof(short)<<" bytes"<<endl;
    cout<<"long: "<<sizeof(long)<<" bytes"<<endl;
    cout<<"long long: "<<sizeof(long long)<<" bytes"<<endl;
    cout<<"================================"<<endl;
    cout<<"char: "<<CHAR_MIN<<" bytes"<<endl;
    cout<<"int: "<<INT_MIN<<" bytes"<<endl;
    cout<<"short: "<<SHRT_MIN<<" bytes"<<endl;
    cout<<"long: "<<LONG_MIN<<" bytes"<<endl;
    cout<<"long long: "<<LLONG_MIN<<" bytes"<<endl;
    cout<<"================================="<<endl;
    cout<<"char: "<<CHAR_MAX<<" bytes"<<endl;
    cout<<"int: "<<INT_MAX<<" bytes"<<endl;
    cout<<"short: "<<SHRT_MAX<<" bytes"<<endl;
    cout<<"long: "<<LONG_MAX<<" bytes"<<endl;
    cout<<"long long: "<<LLONG_MAX<<" bytes"<<endl;
    
    
    
    return 0;
}
