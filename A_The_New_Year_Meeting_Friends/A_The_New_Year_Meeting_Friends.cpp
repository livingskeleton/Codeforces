#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    int maximum = max({x1, x2, x3});
    int minimum = min({x1, x2, x3});
    int medium = x1+x2+x3-maximum-minimum;
    cout<<abs(maximum-medium)+abs(medium-minimum);
}