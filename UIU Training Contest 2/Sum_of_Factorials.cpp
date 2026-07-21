#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {

    int t, i = 0;
    cin >> t;

    while (t--)
    {
        i++;
        long long n, possible = 1;
        cin >> n;

        vector<long long> factArr;
        for (int j = 1; j < 20; j++) factArr.push_back(factorial(j));

        vector<int> factArrCpy(19, 0);

        for (int j = 18; j >= 0; j--) {
            if (factArr[j] <= n) {
                n -= factArr[j];
                factArrCpy[j] = 1;
            }
        }

        int useZero = 0;
        if (n == 1) {
            useZero = 1;
            n = 0;
        }

        if (n != 0) possible = 0;

        cout << "Case " << i << ": ";
        if (!possible) {
            cout << "impossible\n";
        } else {
            int first = 1;
            if (useZero) { 
                cout << "0!";
                first = 0;
            }
            for (int j = 0; j < 19; j++) {
                if (factArrCpy[j]) {
                    if (!first) cout << "+";
                    cout << (j + 1) << "!";
                    first = 0;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}