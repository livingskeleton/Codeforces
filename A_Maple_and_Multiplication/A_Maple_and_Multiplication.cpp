#include <bits/stdc++.h>
#include<numeric>
using namespace std;
int LCM(int a, int b){
    int max_num = (a>b)?a:b;
    while(max_num%a != 0 && max_num%b != 0){
        max_num++;
    }
    return max_num;
}

int main() {
    int n, a =0, b = 0, turs =0, number;
    int result = 0;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>a>>b;
        //int number = (a>b)?a:b;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        else{
            if(a%b ==0 || b%a == 0){
                result = 1;
            }
            else{
                if(a>b){
                    result= (LCM(a,b)/a)+1;
                }
                else{
                    result = (LCM(a,b)/b)+1;
                }
            }

        }
        
        // while(a!=b){
        //     if(a>b){
        //         result++;
        //         number = LCM(a, b)/b;
        //         a = a*number;
        //         cout<<a<<endl;
        //     }
        //     else{
        //         result++;
        //         number = LCM(a, b)/a;
        //         b = b*number;
        //     }
            
        //     }
        cout<<result<<endl;

        }

        // int result = LCM(a, b)/number;
        // cout<<a<<endl;
        
}
    