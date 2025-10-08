#include <bits/stdc++.h>
using namespace std;

int main(){
    long long unsigned int n, answer=0;
    cin>>n;
    string input;
    for(int i = 0; i<n; i++){
        cin>>input;
        if(input == "Icosahedron"){
            answer+=20;
        }
        if(input == "Tetrahedron"){
            answer+=4;
        }
        if(input == "Octahedron"){
            answer+=8;
        }
        if(input == "Cube"){
            answer+=6;
        }
        if(input == "Dodecahedron"){
            answer+=12;
        }
    }
    cout<<answer<<endl;
}