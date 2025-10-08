#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, k;
    cin>>n>>k;
    int time_left  = 240-k;
    int i = 0;
    while(time_left >= 0){
        i++;
        time_left-=i*5;
    }
    if(i>n){
        cout<<n;
    }
    else{
        cout<<i-1;
    }
}