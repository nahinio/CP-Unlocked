#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define sz(x) (int)(x).size()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int k, s, f;
        cin >> k >> s >> f;

        if((f - s) % k != 0) {
            cout << -1 << endl;
        } else {
            ll jumps = (f - s) / k + 1;
            ll sum = (jumps * (2 * s + (jumps - 1) * k)) / 2;
            cout << sum << endl;
        }
        
    }
    
    return 0;

      
}
