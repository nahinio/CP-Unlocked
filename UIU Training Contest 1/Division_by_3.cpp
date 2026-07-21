#include <bits/stdc++.h>
using namespace std;

long long not_divisible(long long x){
    if (x <= 0) return 0;
    return (x + 2) / 3;
}

int main() {
    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++) {
        long long a, b;
        cin >> a >> b;

        long long total = b - a + 1;
        long long bad = not_divisible(b) - not_divisible(a - 1);

        cout << "Case " << tc << ": " << total - bad << "\n";
    }

    return 0;
}