#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i = 0;
    cin >> t;

    while (t--) {
        i++;
        cout << "Case " << i << ":" << endl;
        int xa, ya, xb, yb;
        cin >> xa >> ya >> xb >> yb;

        int cow;
        cin >> cow;

        for (int i = 0; i < cow; i++)
        {
            int x, y;
            cin >> x >> y;

            if(x > xa && x < xb && y > ya && y < yb) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}
