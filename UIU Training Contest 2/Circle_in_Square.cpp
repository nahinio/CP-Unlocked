#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i = 0;
    cin >> t;

    while (t--)
    {
        i++;
        double n;
        cin >> n;
        
        printf("Case %d: %.2lf\n",i, (4 * n * n) - (2 *acos(0.0) * n * n));
    }

    return 0;
}