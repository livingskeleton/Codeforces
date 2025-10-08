#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    cin>>n;
    int m =0;
    for (int i =0; i<n.length(); i++){
        if(n[i] == '7' || n[i] == '4'){
            m++;
        }
    
    }
    if (m == 7 || m == 4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}