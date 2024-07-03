/*
 * P or p for printing number
 * A or a for adding number
 * M or m for displaying average of the elements in the vector
 * S or s for displaying smallest number
 * L or l for displaying largest number
 * Q or q for quit
 * switch (input){
 *  case 'p'
 * 
 * 
 * }
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
#include <iostream>
#include <vector>

using namespace std;
//1.make a vector for storing the numbers
// * 2.make a for loop use auto to show the elements in the vector 
// * 3.make a input to add the number to the vector
// * 4.make a for loop to show the elements in the vector
// * 5.make a loop for searching the largest number
// * 6.make a loop for showin the smallest number 
// * 
int main(){
    vector<int> numbers;
    bool condition{true};
    char input{};
    do{
        cout<<"P - print number"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display mean of the numbers"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"Q - Quit"<<endl;
        cout<<"\n Enter your choice: ";
        cin>>input;      

        switch(input){
            case 'p':
            case 'P':
                if (numbers.size()==0){
                    cout<<"[] the list is empty"<<endl;
                }else{
                    cout<<"[ ";
                    for(auto number: numbers){
                        cout<<number<<" ";
                    }
                    cout<<" ]"<<endl;
                }
                break;
            case 'a':
            case 'A':{
                cout<<"enter the number: ";
                int number{};
                cin>>number;
                numbers.push_back(number);
                cout<<number<<"has been added"<<endl;
                break;
            }
            case 'm':
            case 'M':{
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
                break;
            }
            case 'l':
            case 'L':{
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
                break;
            }
            case 's':
            case 'S':{
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
                break;
            }
            case 'q':
            case 'Q':
                cout<<"good bye";
                condition={false};
                break;
            default:
                cout<<"it it wrong answer"<<endl;
                break;
        };
    }while(condition);
    return 0;
}
