#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define sz(x) (int)(x).size()

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sum = 0;
        bool twofour = false;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if (sum >= 2400)
            {
                twofour = true;
            }
        }

        if (twofour)
        {
            cout << "programmer" << endl;
        }
        else
        {
            cout << "noobgrammer" << endl;
        }
    }

    return 0;
}
