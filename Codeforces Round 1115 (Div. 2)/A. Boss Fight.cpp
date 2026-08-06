#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v;

        int sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
            sum += x;
        }

        sort(v.begin(), v.end());

        int highest = 1;
        int highv = v[0];

        int count = 1;

        for (int i = 1; i < n; i++) {
            if (v[i] == v[i - 1]) count++;
            else count = 1;

            if (count > highest) {
                highest = count;
                highv = v[i];
            }
        }

        int other = n - highest;

        if (highest <= other + 2) cout << sum << endl;
        else {
            int x = highest - (other + 2);
            cout << sum - (x * highv) << endl;
        }
    }

    return 0;
}