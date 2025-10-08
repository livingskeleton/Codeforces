#include <bits/stdc++.h>

using namespace std;

int main(){
    short n;
    cin>>n;
    short n_copy = n;
    long double input=0, result=0;
    while(n!=0){
        cin>>input;
        result += input/n_copy;
        n--;
    }
    cout<<setprecision(14)<<showpoint<<result<<endl;
}