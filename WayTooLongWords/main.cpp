#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    while (n!=0){
        string word;
        cin>>word;
        int word_length = word.length();
        if (word_length>10){
            cout<<word[0]<<word_length-2<<word[word_length-1]<<"\n";
        }
        else{
            cout<<word<<"\n";
        }
        n--;

    }
}