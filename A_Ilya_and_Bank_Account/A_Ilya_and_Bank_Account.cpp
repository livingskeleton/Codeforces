#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int input;
    cin>>input;
    if(input>0){
        cout<<input<<endl;
    }
    else{
        input = input*-1;
        string ren = to_string(input);
        int len = ren.length();
        
        if((ren[len-1])>ren[len-2]){
            ren.erase(len-1,1);
            if (ren != "0"){
                cout<<'-'<<ren;
            }
            else{
                cout<<ren;

            }
            
            
            
        }
        
        else{
            ren.erase(len-2,1);
            if (ren != "0"){
                cout<<'-'<<ren;
            }
            else{
                cout<<ren;

            }
            
        }
    }
    
}