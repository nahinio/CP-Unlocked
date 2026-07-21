#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i = 0;
    cin >> t;

    while (t--)
    {
        i++;
        string s;
        cin >> s;

        string srev = s;
        reverse(srev.begin(), srev.end());

        if(s == srev) cout <<"Case " << i << ": "  << "Yes" << endl;
        else cout <<"Case " << i << ": "  << "No" << endl;
    }
    
    return 0;
}
