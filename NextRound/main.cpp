#include <iostream>
#include <string>

using namespace std;

int main(){
    int n,k,store,i=0;
    
    cin>>n>>k;
    int arr[n];
    int store_n = n;
    while (n!=0){
        cin>>store;
        arr[i]=store;
        i++;
        n--;

        
    }
    int ans = k;
    store = arr[k-1];

    for (int i = 0; i<store_n; i++){
        if (arr[i]<=0 && i<k){
            ans--;
        }
        if (arr[i]>=store && i >= k && arr[i]>0){
            ans++;
        }
    }
    cout<<ans<<"\n";
}

         
