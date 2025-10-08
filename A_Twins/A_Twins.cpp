#include <bits/stdc++.h>
using namespace std;
int SUM(deque<int> a){
    int sum=0;
    for(int l =0; l<a.size(); l++){
        sum+=a[l];
    }
    return sum;
}

int main(){
    int n, input, answer;
    deque<int> coins;
    cin>>n;
    deque<int> coins_size;
    for (int i =0; i<n; i++){
        cin>>input;
        coins.push_back(input);
    }
    sort(coins.begin(), coins.end());
    while(!coins.empty()){
        answer += coins.back();
        coins_size.push_back(coins.back());
        coins.pop_back();

        if(answer>SUM(coins)){
            cout<<coins_size.size()<<endl;
            break;
        }
        
    }
}