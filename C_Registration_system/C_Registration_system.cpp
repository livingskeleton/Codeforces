#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    unordered_map<string, int> storage;
    cin >> n;
    while (n--) {
        string name;
        cin >> name;
        if (storage.count(name) == 0) {
            cout <<"OK"<<endl;
            storage[name] = 1;
        } else {
            cout<<name<<storage[name]<<endl;
            storage[name] = storage[name]+1;
        }
    }

}