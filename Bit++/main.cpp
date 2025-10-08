#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string command;
    cin>>n;
    int number = 0;
    while(n !=0){
        string increment1 = "++X";
        string increment2 = "X++";
        string decrement1 = "--X";
        string decrement2 = "X--";
        cin>>command;

        if (command == increment1 || command == increment2){
            number++;
        }
        else if (command == decrement1 || command == decrement2){
            number--;
        }
        
        n--;
    }
    cout<<number;
}