#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, count = 0;
        cin >> a >> b >> c;

        while(true) {
            if(a == b || b == c || a == c) {
                cout << count << endl;
                break;
            }

            int max_val = max({a, b, c});
            int min_val = min({a, b, c});

            if(max_val == a) {
                a--;
            } else if(max_val == b) {
                b--;
            } else {
                c--;
            } 

            if(min_val == a) {
                a++;
            } else if(min_val == b) {
                b++;
            } else {
                c++;
            }

            count++;
        }

    }

    return 0;
}
