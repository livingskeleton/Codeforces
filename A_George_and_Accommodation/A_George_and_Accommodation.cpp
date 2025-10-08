#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int p, q;
    int rooms = 0;
    int difference =0;
    for(int i =0; i<n; i++){
        cin>>p>>q;
        int difference = q-p;
        if(difference>=2){
            rooms++;
        }

    }
    cout<<rooms<<endl;
}