#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;
    string s;

    cin>>n;
    while(n!=0){
        cin>>s;
        int len = s.length();
        int answer = 0;
        for(int l =0; l<len; l++){
            if(s[l] != '0'){
                answer++;
            }
        }
        cout<<answer<<endl;

        for (int i=0; i<len; i++){
            int number = (s[i])-'0';
            if(number != 0){
                cout<<number*pow(10, (len-1-i))<<" ";
            }
        }
        cout<<endl;
        n--;
    }
}