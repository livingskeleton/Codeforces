#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;
    for(int i =0; i<input.length(); i++){
        if(input[i] == 'H' || input[i] == 'Q' ||input[i] == '9'){
            
            for(int l =0; l<input.length(); l++){
                if(input[i] == '+'){
                    cout<<"NO"<<endl;
                    break;
                }
                else if (l == (input.length()-1)){
                    cout<<"YES"<<endl;
                }

            }
            break;
        }
        else if (i == (input.length()-1)){
            cout<<"NO"<<endl;
        }
    }
}