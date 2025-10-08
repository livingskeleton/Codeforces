#include <bits/stdc++.h>
using namespace std;

int main() {
    int stops, exit, enter;
    cin>>stops;
    int store[stops];
    int passengers_init = 0;
    int passengers =0;
    for(int i =0; i<stops; i++){
        cin>>exit>>enter;
        passengers_init = passengers_init+enter-exit;
        if((passengers_init>passengers) && (i != stops-1)){
            passengers = passengers_init;
        }
    }
    cout<<passengers<<endl;
}