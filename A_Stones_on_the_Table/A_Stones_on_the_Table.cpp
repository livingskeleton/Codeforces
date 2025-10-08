#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string color_stones;
    cin>>n>>color_stones;
    int ans = 0;

    for (int i =1; i<n; i++){
        if (color_stones[i-1] == color_stones[i]){
            ans++;
        }
    }
    cout<<ans<<endl;
}