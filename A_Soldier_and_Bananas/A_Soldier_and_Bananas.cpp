#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned int k,n,w, total;
    cin>>k>>n>>w;
    total = 0;
    for(int i =0; i<=w; i++){
        total += k*i;
    }
    int ans = total-n;
    if (ans<0){
        ans =0;
    }
    cout<<ans;

}