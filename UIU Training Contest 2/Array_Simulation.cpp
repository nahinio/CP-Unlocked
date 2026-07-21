#include <bits/stdc++.h>
using namespace std;
vector<int> arr;

void s(int d) {
    for(int i = 0; i < arr.size(); i++) {
        arr[i] += d;
    }
}

void mm(int d) {
    for(int i = 0; i < arr.size(); i++) {
        arr[i] *= d;
    }
}


void d(int k) {
    for(int i = 0; i < arr.size(); i++) {
        arr[i] /= k;
    }
}

void p(int y, int z) {
    swap(arr[y], arr[z]);
}

void r() {
    reverse(arr.begin(), arr.end());
}

int main() {

    int t, i = 0;
    cin >> t;

    while (t--)
    {
        i++;
        int n, m;
        cin >> n >> m;
        arr.resize(n);
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        cout << "Case " << i << ":\n";
        while(m--) {
            char c;
            cin >> c;
            if(c == 'S') {
                int d;
                cin >> d;
                s(d);
            } else if(c == 'M') {
                int d;
                cin >> d;
                mm(d);
            } else if(c == 'D') {
                int k;
                cin >> k;
                d(k);
            } else if(c == 'P') {
                int y, z;
                cin >> y >> z;
                p(y, z);
            } else if(c == 'R') {
                r();
            }
        }
        for(int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}