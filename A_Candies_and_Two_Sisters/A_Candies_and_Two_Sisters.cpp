#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n;
    cin>>t;
    for(int i = 0; i<t; i++){
        cin>>n;
        if(n == 1 || n ==2){
            cout<<0<<endl;
            continue;
        }
        if(n%2 == 0){
            cout<<fixed<<setprecision(0)<<ceil((n/2))-1<<endl;
        }
        else{
            cout<<fixed<<setprecision(0)<<ceil((n/2))<<endl;

        }

        
    }

}