#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAXN = 2e6 + 5;
vector<bool> is_prime;
vector<int> prefix;

void sieve(int n) {
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    prefix.assign(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + (is_prime[i] ? 1 : 0);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve(MAXN - 1);
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        int sum = prefix[r] - prefix[l - 1];

        cout << sum << "\n";


        //bhai plese TLE khais na please

    }
    return 0;

}