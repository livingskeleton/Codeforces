#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    for(int i=0; i<5; i++){
        for(int l=0; l<5; l++){
            cin>>a;
            if (a == 1){
            int steps = (abs(i-2)+abs(l-2));
            cout<<steps<<"\n";
            }
        }
    }
}