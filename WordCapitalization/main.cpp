#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    char c = toupper(a[0]);
    cout<<c;
    for (int i = 1; i<a.length(); i++){
        cout<<a[i];
    }
    cout<<endl;

}