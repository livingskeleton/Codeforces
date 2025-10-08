#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int p = 0 ,c = 0, input;
    for(int i = 0; i<n; i++){
        cin>>input;
        if (input>0){
            p+=input;
        }
        if(input<0){
            if(p>0){
                p--;
                continue;
            }
            else{
                c++;
            }
        }
        

    }
    cout<<c<<endl;
}