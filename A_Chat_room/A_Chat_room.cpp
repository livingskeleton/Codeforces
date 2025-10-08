#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    string match = "hello";
    for(int i =0; i<s.length(); i++){
        if (s.length()>=match.length()){
            if(s[i] == match[i]){
                continue;
                
            }
            else if(s[i] != match[i]){
                s.erase(i, 1);
                i--;
            }
        }
        
    }
    if (s.length()==match.length()){
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }

}