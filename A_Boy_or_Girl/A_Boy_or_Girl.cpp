#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    cin>>input;
    vector <char> input_copy;
    
    for (int i = 0; i<input.length(); i++){
        int m = 0;
        for(char e: input_copy){
            if (e == input[i]){
                m++;
            }
        }
        if (m==0){
            input_copy.push_back(input[i]);
        }
        }
    
    int ans = input_copy.size();
    if(ans%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

}