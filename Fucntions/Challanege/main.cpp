#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

vector<int> numbers;

void display();

void print_number();

void add_number();

void display_average();

void display_smallest_number();

void display_largest_number();

char upper_case_char(char);

char upper_case_char(char chr){
    return toupper(chr);
}

void print_number(){
    if (numbers.size()==0){
        cout<<"[] the list is empty"<<endl;
    }else{
        cout<<"[ ";
        for(auto number: numbers){
            cout<<number<<" ";
        }
        cout<<" ]"<<endl;
    }
}

void add_number(){
    cout<<"enter the number: ";
    int number{};
    cin>>number;
    numbers.push_back(number);
    cout<<number<<" has been added"<<endl;
}

void display_average(){
    if(numbers.size()==0){
        cout<<"Unable to calculate the mean - no data"<<endl;
    }else{
        int average{};
        for(auto number: numbers){
            average += number;
        }
        average = average/numbers.size();
        cout<<"the average of the numbers is: "<<average<<endl;
    }
}

void display_smallest_number(){
    if(numbers.size()==0){
        cout<<"Unable to determine the smallest number - list is empty"<<endl;
    }else{
        int small{};
    for (auto number: numbers){
        if(small>number){
            small = number;
        }else if(small == 0){
            small = number;
        }
    }
    cout<<"smallest number is: "<<small<<endl;
    }
}

void display_largest_number(){
    if(numbers.size()==0){
        cout<<"Unable to determine the largest number - list is empty"<<endl;
    }else{
        int large{};
        for (auto number: numbers){
            if(large<number){
                large = number;
            }
        }
        cout<<"the largest number is: "<<large<<endl;                    
    }    
}

void display(){
    string input{};
    bool condition{true};
    do{
        cout<<"P - print number"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display mean of the numbers"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"Q - Quit"<<endl;
        cout<<"\n Enter your choice: ";
        cin>>input;
        if (input.length() > 1 || input.length()==0){
            cout<<"you must enter an a character!!"<<endl;
        }else{
            char choice{};
            choice= {input[0]};
            
            switch(upper_case_char(choice)){
                case 'P':
                    print_number();
                    break;
                case 'A':
                    add_number();
                    break;
                case 'M':
                    display_average();
                    break;
                case 'S':
                    display_smallest_number();
                    break;
                case 'L':
                    display_largest_number();
                    break;
                case 'Q':
                    condition = {false};
                    cout<<"Quiting...."<<endl;
                    break;
                default:
                    cout<<"in valid character try again"<<endl;
                    break;
            }
        }
    }while(condition);
}

int main(){
    display();
    return 0;
}