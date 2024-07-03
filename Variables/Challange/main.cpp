/*
Franks Carpte Cleaning Service
charges:
    $25 per small room
    $35 per large room
 Sales tax rate is 6%
 Estimates are valid for 30 days
 prompt the user for the number of small and large rooms they woould like cleaned
and provide an estimate such as:
 Estimate for carpte cleaning service
  Number of small rooms:3
  Number of large rooms:1
  price per small room:$25
  price per large room:$35
  Cost: $110
  Tax: $6.6
===================================
  total estimate: $118.8
  this estimate is valid for 30 days
*/
/*
 * Ask for the large numbers. done
 * Ask for the small numbers. done 
 * print the price per small room 
 * print the price per large room
 * print the total cost
 * print the tax 
 * print the line to seperate
 * print the total cost
 * print how much is valid for
 * 
 * 
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    cout<<"Hello, Welcom to our company"<<endl;
    
    cout<<"\n How many small rooms, do you want?";
    unsigned int small_rooms;
    cin>>small_rooms;
    
    cout<<"\n How many large rooms, do you want?";
    unsigned int large_rooms;
    cin>>large_rooms;
    
    const float price_small_rooms{25.0};
    const float price_large_rooms{35.0};
    
    const unsigned int valid_days{30};
    const float tax{0.06};
    
    cout<<"\n==================================="<<endl;
    cout<<"Number of small rooms: "<<small_rooms<<endl;
    cout<<"Number of large rooms: "<<large_rooms<<endl;
    cout<<"Price of small rooms are: $"<<price_small_rooms<<endl;
    cout<<"Price of large rooms are: $"<<price_large_rooms<<endl;
    cout<<"Cost: $"<<(small_rooms*price_small_rooms)+(large_rooms*price_large_rooms)<<endl;
    cout<<"Tax: $"<<(small_rooms*price_small_rooms*tax)+(large_rooms*price_large_rooms*tax)<<endl;
    cout<<"====================================="<<endl;
    cout<<"Total estimate is $"<<(small_rooms*price_small_rooms)+(large_rooms*price_large_rooms)+(small_rooms*price_small_rooms*tax)+(large_rooms*price_large_rooms*tax)<<endl;
    cout<<"This estimate is valid for "<<valid_days<<" days"<<endl;
    
    return 0;
}
