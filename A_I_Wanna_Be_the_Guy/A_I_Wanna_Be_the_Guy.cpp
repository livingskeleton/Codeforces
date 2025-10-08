#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p,q,level_p, level_q;
    set<int>store;
    cin>>n>>p;
    while(p!=0){
        cin>>level_p;
        store.insert(level_p);
        p--;
    }
    cin>>q;
    while(q!=0){
        cin>>level_q;
        store.insert(level_q);
        q--;
    }
    if(store.size() == n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

}