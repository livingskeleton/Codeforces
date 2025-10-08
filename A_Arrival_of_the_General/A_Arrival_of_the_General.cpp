#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, input, answer = 0, max_indent, min_indent;
    deque<int>soilder;
    priority_queue<int>ordered_soilders;
    priority_queue<int, vector<int>, greater<int>>d_ordered_soilders;

    cin>>n;
    int n_copy = n;
    while(n!=0){
        cin>>input;
        soilder.push_back(input);
        ordered_soilders.push(input);
        d_ordered_soilders.push(input);
        n--;
    }
    int max_height = ordered_soilders.top();
    int min_height = d_ordered_soilders.top();
    int len = ordered_soilders.size();



    while(len != 0){
       
        if(soilder[len-1] == min_height){
            min_indent = len-1;
            answer+=((n_copy-(len-1)));
            break;
        }
        len--;
    }
    
    len = 0;
    while(len != n_copy){
        if(soilder[len] == max_height){
            max_indent = len;
            answer+=(len);
            break;
        }
        len++;
    }
    if(max_indent>min_indent){
        cout<<answer-2;

    }
    else{
        cout<<answer-1;
    }
    

}