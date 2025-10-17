#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<pair<int, int>> data;
    int n, home, guest, answer = 0;

    cin>>n;
    for(int i =0; i<n; i++){
        cin>>home>>guest;
        data.emplace_back(home, guest);
        
    }
    for(int i=0; i<n; i++){
        for(int l =0; l<n; l++){
            if(l!=i){
                if (data[i].first == data[l].second){
                        answer++;
                } 
            }
        }
    }
    cout<<answer;
}