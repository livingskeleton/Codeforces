#include<bits/stdc++.h>


using namespace std;


int main(){
    
    string input;
    cin>>input;
    int name_size = input.length();
    char Array[input.length()];
   
    for (int i =0; i<input.length(); i++){
        char element = input[i];
        for(int l =0; l<input.length(); l++){
            if (element == Array[l]){
                continue;
            }
            if (element != Array[l]){
                Array[i] = element;

            }
            
        
        }
        
        

    }
    cout<<Array;
    
}