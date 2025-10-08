#include <bits/stdc++.h>
using namespace std;

int main(){
    long long unsigned int input, hundred_bill, twenty_bill, ten_bill, five_bill, one_bill, amt_ten, amt_hundred, amt_twenty;
    cin>>input;
    hundred_bill = input/100;
    amt_hundred = (input-hundred_bill*100);
    twenty_bill = amt_hundred/20;
    amt_twenty = (amt_hundred-twenty_bill*20);
    ten_bill = amt_twenty/10;
    amt_ten = (amt_twenty-ten_bill*10);
    five_bill = amt_ten/5;
    one_bill = (amt_ten-five_bill*5);

    cout<<hundred_bill+twenty_bill+ten_bill+five_bill+one_bill<<endl;


}