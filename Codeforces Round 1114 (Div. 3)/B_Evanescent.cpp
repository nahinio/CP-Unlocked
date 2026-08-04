#include <bits/stdc++.h>
using namespace std;

int f(string s, int n) {
    if (s.empty()) return 0;

    int count = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) count++;
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int total_count = f(s, n);
        int best = 0;

        for (int i = 1; i < n - 1; i++) {
            if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
                if (s[i - 1] == s[i + 1]) best = 2;
                else best = max(best, 1);
            }
        }

        cout << total_count - best << endl;
        
    }

    return 0;
}
