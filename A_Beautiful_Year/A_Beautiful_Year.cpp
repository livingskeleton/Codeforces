#include <bits/stdc++.h>

using namespace std;

int main(){
    short year_input;
    cin>>year_input;

    while (true){
        year_input++;
        short first_int = year_input/1000;
        short thousand_sep = first_int*1000;
        short second_int = (year_input-thousand_sep)/100;
        short hundred_sep = second_int*100;
        short third_int = (year_input-thousand_sep-hundred_sep)/10;
        short fourth_int = (year_input-thousand_sep-hundred_sep-third_int*10);
        if (first_int != second_int && first_int != third_int && first_int != fourth_int && second_int != third_int && second_int  != fourth_int && third_int != fourth_int){
            break;
        }
    }
    cout<<year_input<<endl;
}