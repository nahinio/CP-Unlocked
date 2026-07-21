#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i = 0;
    cin >> t;

    while (t--)
    {
        i++;
        int p, s, r;
        cin >> p >> s >> r;

        if(s != p || r == 1) cout <<"Case " << i << ": "  << "Yes" << endl;
        else cout <<"Case " << i << ": "  << "No" << endl;
    }
    

    return 0;
}