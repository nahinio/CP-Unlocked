#include <bits/stdc++.h>
using namespace std;

int one_needed(int zero){
     return (zero / 3);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        s = "10" + s + "01";

        int sum = 0;

        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') count++;
            else {
                sum += one_needed(count);
                sum++;
                count = 0;
            }
        }

        cout << sum - 2 << endl;

    }

    return 0;
}