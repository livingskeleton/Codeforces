#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h,height=0,width=0;
    cin>>n>>h;
    
    while(n!=0){
        
        cin>>height;

        if(height>h){
            width++;
        }
        width++;
        
        n--;
    }
    cout<<width<<endl;
}