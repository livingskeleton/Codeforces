#include <bits/stdc++.h>
#include <queue>
using namespace std;


int main(){
    int t, n, input, min;
    cin>>t;
    
    //priority_queue<int, vector<int>, greater<int>> descending;

    while(t!=0){
        cin>>n;
        priority_queue <int> answer;
        deque<int>d;
        priority_queue<int, vector<int>, greater<int>> descending;
        while(n!=0){
            cin>>input;
            d.push_back(input);
            n--;
        }
        sort(d.begin(), d.end());

        for(int i = 0; i<d.size(); i+=2){
            min = (d[i+1]-d[i]);
            answer.push(min);


        }

        
        cout<<answer.top()<<endl;
        t--;
    }   
}