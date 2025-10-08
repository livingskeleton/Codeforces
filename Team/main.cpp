#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 0;
    while (n!=0){
        int I1, I2, I3;
        cin>>I1>>I2>>I3;
        int SUM = I1+I2+I3;
        if (SUM > 1){
            i++;
            
        }
        n--;

    }
    cout<<i;


}