#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    cin>>input;
    if(input.length()<7){
        cout<<"NO";
    }

    else{
        for(int i =0; i<input.length(); i++){
            // if(input.length()-i < 7){
            //     cout<<"NO";
            //     return 0;
            if(input[i]==input[i+1] && input[i+1]==input[i+2] && input[i+2]==input[i+3] && input[i+3]==input[i+4] && input[i+4]==input[i+5] && input[i+5]==input[i+6]){
                cout<<"YES";
                return 0;
            
            }
            
            }
            cout<<"NO";
            }
    }
