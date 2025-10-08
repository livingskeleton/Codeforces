#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, input;
    priority_queue<int, vector<int>, greater<int>>pq;
    cin>>n;
    while(n!=0){
        cin>>input;
        pq.push(input);
        n--;
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();

    }
}