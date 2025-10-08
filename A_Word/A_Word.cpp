#include <bits/stdc++.h>

using namespace std;

int main(){

    string a;
    cin>>a;
    int small = 0;
    string cap = "abcdefghijklmnopqrstuvwxyz";
    for (int l =0; l<a.length(); l++){
        for (int i =0; i<26; i++){
            if (cap[i] == a[l]){
                small++;
            }
        }
    }
    
    int bigg = a.length()-small;
    if(small == bigg){
        for (int l =0; l<a.length(); l++){cout<<(char)tolower(a[l]);}
    }
    else if (bigg>small){
        for (int l =0; l<a.length(); l++){cout<<(char)toupper(a[l]);}
    }
    else{
        for (int l =0; l<a.length(); l++){cout<<(char)tolower(a[l]);}
    }

}
