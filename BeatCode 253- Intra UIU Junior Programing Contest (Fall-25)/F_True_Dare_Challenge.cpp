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

    int n;
    cin >> n;

    int xors = INT_MAX;
    vector<int> v;

    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        v.pb(x);
    }

    sort(all(v));
    
    for(int i = 0; i < n - 1; i++){
        xors = min(xors, (int)(v[i] ^ v[i+1]));
    }

    cout << xors << endl;

    return 0;
}
