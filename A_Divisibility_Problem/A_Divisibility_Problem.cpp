#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b, answer, a_tick;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a>>b;
        long long a_store = a;
        if(b>a){
            cout<<b-a<<endl;
        }
        else{
            if(a % b == 0){
                cout<<0<<endl;

            }
            else{
                cout<<(b*((a/b)+1))-a<<endl;
            }
        }
    }
}