#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, second;
    cin >> n >> second;
    string serial;
    cin >> serial;

    while (second != 0) {

        for (int i = 0; i < n - 1; ) {

            if (serial[i] == 'B' && serial[i+1] == 'G') {

                swap(serial[i], serial[i+1]);
                i += 2;
            }
             
            else {
                i++;
            }
        }
        second--;
    }

    cout << serial << endl;
    return 0;
}
