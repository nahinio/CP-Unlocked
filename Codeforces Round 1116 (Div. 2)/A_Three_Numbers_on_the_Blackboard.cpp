#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long maxim = max({a, b, c});
        long long minim = min({a, b, c});
        long long mintwo = a + b + c - maxim - minim;

        if(maxim > minim + mintwo) {
            cout << (minim + mintwo) - minim << endl;
        } else {
            cout << (maxim - minim) << endl;
        }
    }

    return 0;
}