#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin>>t;
    for(int i =0; i<t; i++){
        cin>>n;
        int answer=0, one_count=0;
        for(int l =0; l<n; l++){
            cin>>k;
            if(k == -1){
                one_count++;
            }
            else if(k==0){
                answer++;
            }
        }
        if(one_count%2 == 0){
            cout<<answer<<endl;
        }
        else{
            cout<<answer+2<<endl;
        }
    }
}