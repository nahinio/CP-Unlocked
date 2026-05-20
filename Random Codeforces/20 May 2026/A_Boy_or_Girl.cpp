#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        set<char> distinct_chars;
        for (auto c : s) {
            distinct_chars.insert(c);
        }

        if (distinct_chars.size() % 2 == 0) cout << "CHAT WITH HER!\n";
        else cout << "IGNORE HIM!\n";
    
    }

    return 0;
}