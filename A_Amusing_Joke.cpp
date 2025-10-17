#include <bits/stdc++.h>
using namespace std;

int main() {
    string req1, req2, found;
    bool ans;
    cin>>req1>>req2>>found;
    map<char, int> data;
    map<char, int> found_map;

    if(req1.length()+req2.length() == found.length()){
        for(int i = 0; i<req1.length(); i++){
            if(data.count(req1[1]) == 0){
                data[req1[i]] = 1;
            }
            else{
                data[req1[i]] +=1;
            }
        }
        for(int i = 0; i<req2.length(); i++){
            if(data.count(req2[i]) == 0){
                data[req2[i]] = 1;
            }
            else{
                data[req2[i]] +=1;
            }
        }
        for(int i = 0; i<found.length(); i++){
            if(found_map.count(found[i]) == 0){
                found_map[found[i]] = 1;
            }
            else{
                found_map[found[i]] +=1;
            }
        }

        for(auto a: found_map){
            if(a.second == data[a.first]){
                ans = true;
            }
            else{
                ans = false;
                cout<<"NO";
                break;
            }
        }
        if (ans){
            cout<<"YES";
        }

    }
    else{
        cout<<"NO";
    }
}