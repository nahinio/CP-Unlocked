#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, count = 0;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        int p, v, to;
        cin >> p >> v >> to;
 
        if(p + v + to >= 2) count ++; 
    }
    
    cout << count << "\n";
 
    return 0;
}