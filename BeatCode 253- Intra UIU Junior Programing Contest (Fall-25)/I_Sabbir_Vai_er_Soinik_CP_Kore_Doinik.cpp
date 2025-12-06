#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define sz(x) (int)(x).size()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.pb(x);
    }

    int sabbir = 0, i = 0, count = 0;

    while (sabbir < t && i < n)
    {
        sabbir += a[i];
        if(sabbir <= t)count++;
        sabbir += a[i];
        i++;
        
    }

    sort(all(a));

    int mahit = 0, j = 0, count2 = 0;

    while(mahit < t && j < n)
    {
        mahit += (a[j] * 2);
        if(mahit <= t)count2++;
        mahit += (a[j] / 2);
        j++;
        
    }

    //cout << sabbir << " " << mahit << endl;
    //cout << count  << " " << count2 << endl;

    if(count < count2) cout << "Sabbir Vai er Soinik, CP Kore Doinik" << endl;
    else cout << "Dhur Chatar Matha" << endl;

    return 0;
}
