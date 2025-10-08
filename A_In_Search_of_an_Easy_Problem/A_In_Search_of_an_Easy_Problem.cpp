#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    bool ver = true;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>a;
        if(a == 1){
            cout<<"HARD";
            ver = false;
            break;
        }

    }
    if(ver){
        cout<<"EASY";
    }
}