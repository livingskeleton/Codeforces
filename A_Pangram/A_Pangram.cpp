#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string input;
    cin>>n;
    cin>>input;
    set<char> alphabets;
    for(int i = 0; i<n; i++){
        input[i] = tolower(input[i]);
        alphabets.insert(input[i]);
    }
    if(alphabets.size()==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}