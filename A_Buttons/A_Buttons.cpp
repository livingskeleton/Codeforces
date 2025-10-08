#include <bits/stdc++.h>
using namespace std;

int main(){
    long long unsigned int a, b, c,annie, katie, st;
    int n;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        annie = a;
        katie  = b;
        st = c/2;
        

        if(c%2!=0){
            annie += (st+1);
            katie += st;
        }
        else{
            annie += st;
            katie += st;
        }
        
        if(annie>katie){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }

}