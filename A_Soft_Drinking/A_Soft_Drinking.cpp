#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = (k*l)/nl;
    int lemon = c*d;
    int salt = p/np;
    cout<<min({lemon, drink, salt})/n; 
}