#include <bits/stdc++.h>

using namespace std;

int main(){
    short int a, n;
    int t, sum;
    cin>>t;
    while(t!=0){
        cin>>n>>a;
        sum = (n*(pow(-1, a)-1))/-2;
        cout<<sum<<endl;
        t--;
    }
}