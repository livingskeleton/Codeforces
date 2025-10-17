#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<long long unsigned> shoes;
    long long unsigned input;
    for(int i =0; i<4; i++){
        cin>>input;
        shoes.insert(input);
    }
    cout<<4-shoes.size();
    
}