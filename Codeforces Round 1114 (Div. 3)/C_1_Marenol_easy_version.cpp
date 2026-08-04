#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int evenA = 0, oddA = 0;
        int evenB = 0, oddB = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] == '1') {
                if(i % 2 == 0) evenA++;
                else oddA++;
            }

            if(b[i] == '1') {
                if(i % 2 == 0) evenB++;
                else oddB++;
            }
        }

        if(evenA == evenB && oddA == oddB)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
