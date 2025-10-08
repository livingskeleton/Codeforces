#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    cin>>input;
    int len = input.length();    

    for(int i = 0; i<len; i+=2){
    sort(input.begin(), input.end());
    }
    for(int l = 0; l<len; l++){
        if (input[l] =='+'){
            continue;
        }
        if (l+1 == len){
            cout<<input[l];
            continue;
        }
        cout<<input[l]<<"+";
    }
}
