#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    string berland, birland;
    cin>>berland>>birland;
    reverse(berland.begin(), berland.end());
    if(berland == birland){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}