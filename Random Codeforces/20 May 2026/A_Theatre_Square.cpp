#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, a;
    if (cin >> n >> m >> a) {
        long long length_stones = (n + a - 1) / a;
        long long width_stones = (m + a - 1) / a;
        
        long long total_stones = length_stones * width_stones;
        
        cout << total_stones << "\n";
    }

    return 0;
}