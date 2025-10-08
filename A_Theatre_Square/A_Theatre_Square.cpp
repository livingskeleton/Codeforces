#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long along_n = (n/a), along_m = (m/a);

    if(n%a != 0){
        along_n++;
        
    }
    if (m%a!=0){
        along_m++;
    }
    cout <<setprecision(0)<<along_m*along_n << endl;
}
