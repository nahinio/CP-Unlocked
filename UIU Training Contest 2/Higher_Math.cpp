#include <bits/stdc++.h>
using namespace std;

bool pythagoras(int a, int b, int c) {
    return (a * a + b * b == c * c);
}

int main() {
    int t, i = 0;
    cin >> t;

    while (t--)
    {
        i++;
        int a, b, c;
        cin >> a >> b >> c;

        if(pythagoras(a, b, c) || pythagoras(a, c, b) || pythagoras(b, c, a)) cout << "Case " << i << ": yes\n";
        else cout << "Case " << i << ": no\n";
    }

    return 0;
}