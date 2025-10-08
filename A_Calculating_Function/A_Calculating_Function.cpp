#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, max, odd_num, even_num = 0;
    cin>>n;
    if(n%2 == 0){
        odd_num = even_num = n/2;
    }
    else{
        odd_num = (n/2)+1;
        even_num = n/2;
    }
    max = even_num*(even_num+1)- odd_num*odd_num;
    cout<<max<<endl;
}