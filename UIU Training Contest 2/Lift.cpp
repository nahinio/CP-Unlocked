#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i = 0;
    cin >> t;
    
    while (t--) {
        i++;
        int n, m;
        cin >> n >> m;
        
        cout << "Case " << i << ": " << abs((m - n) * 4) + (n * 4) + 19 << endl;
    }
    
    return 0;
}