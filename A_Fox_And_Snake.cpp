#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,count=1;
    cin>>n>>m;
    for(int i =0; i<n; i++){
        if(i%2==0){
            for(int l =0;  l<m; l++){
                cout<<"#";
            }
            cout<<endl;
        }
        else{
            if(count%2!=0){
                for(int l =0; l<m-1; l++){
                    cout<<".";
                }
                cout<<"#"<<endl;
            }
            // cout<<"#"<<endl;
            else{
                cout<<"#";
               for(int l =0; l<m-1; l++){
                    cout<<".";
                }
                cout<<endl; 
            }
            count++;
        }
    }
}