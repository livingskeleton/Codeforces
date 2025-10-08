#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, pairs=0;
    cin>>n;
    string input1, input2;
    for(int i =0; i<n; i++){
        cin>>input2;
        if(input2[1] == input1[0]){
            pairs++;
        }
        input1 = input2;
    }
    cout<<pairs+1<<endl;
}