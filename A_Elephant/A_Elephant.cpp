#include <bits/stdc++.h>

using namespace std;

int main(){
    int input;
    cin>>input;
    int ans = 0;
    if (input>5){
        unsigned int number_of_5 = input/5;
        ans+=number_of_5;
        input -= number_of_5*5;
        if(input>=4){
            int number_of_4 = input/4;
            ans+=number_of_4;
            input -= number_of_4*4;
        }
        if(input>=3){
            int number_of_3 = input/3;
            ans+=number_of_3;
            input -= number_of_3*3;
        }
        if(input>=2){
            int number_of_2 = input/2;
            ans+=number_of_2;
            input -= number_of_2*2;
        }
        if(input==1){
            ans++;
        }

        }


    else{
        ans = 1;
    }
    cout<<ans;
}