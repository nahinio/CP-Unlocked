#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i = 0;
    cin >> t;

    while (t--)
    {
        i++;
        long long n, sum = 0;
        cin >> n;
        vector<int> a(n);
        for(int j = 0; j < n; j++) {
            cin >> a[j];
            if(a[j] > 0) sum += a[j];
        }
        cout <<"Case " << i << ": "  << sum << endl;
    }
    
    return 0;
}