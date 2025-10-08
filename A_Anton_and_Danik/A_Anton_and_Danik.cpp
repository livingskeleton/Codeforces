#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int anton=0, danik=0;
    cin>>n;
    int n_copy = n;
    string a;
    cin>>a;
    for(int i = 0; i<a.length(); i++){
        if (a[i] == 'A'){
            anton++;
        }
        else{
            danik++;
        }
    }
    if(danik>anton){
        cout<<"Danik"<<endl;
    }
    else if(danik == anton){
        cout<<"Friendship"<<endl;
    }
    else{
        cout<<"Anton"<<endl;
    }
}