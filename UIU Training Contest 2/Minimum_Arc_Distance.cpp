#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i = 0;
    cin >> t;

    while (t--) {
        i++;
        cout << "Case " << i << ": ";

        int ox, oy, ax, ay, bx, by;
        cin >> ox >> oy >> ax >> ay >> bx >> by;

        double oa = sqrt(pow(ox - ax, 2) + pow(oy - ay, 2));
        double ob = sqrt(pow(ox - bx, 2) + pow(oy - by, 2));
        double ab = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));

        double angle_a = acos((pow(oa, 2) + pow(ob, 2) - pow(ab, 2)) / (2 * oa * ob));

        printf("%.3lf\n", ob * angle_a);
    }

    return 0;
}