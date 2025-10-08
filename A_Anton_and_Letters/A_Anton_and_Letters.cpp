#include <bits/stdc++.h>
using namespace std;

int main(){
    set<char> input;
    string input_s;
    getline(cin, input_s);
    for(int i = 0; i<input_s.length(); i++){
        if(input_s[i] != '{' && input_s[i] != '}' && input_s[i] != ' ' && input_s[i] != ','){
            input.insert(input_s[i]);
        }
    }
    cout<<input.size()<<endl;
    
}