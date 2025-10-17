#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, input;
    cin>>n;
    unordered_map<int,int> data;
    
    for(int i = 1; i<=n; i++){
        cin>>input;
        data.emplace(input, i);
        
    }
    for(int l = 1; l<=n; l++){
        cout<<data[l]<<" ";        
    }
    
}