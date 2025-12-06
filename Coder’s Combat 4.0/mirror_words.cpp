#include<bits/stdc++.h>
using namespace std;
int main(){

	string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); ++i)
    {
        if(a[i] == 'A') a[i] = 'a';
        else if(a[i] == 'B') a[i] = 'b';
        else if(a[i] == 'C') a[i] = 'c';
        else if(a[i] == 'D') a[i] = 'd';
        else if(a[i] == 'E') a[i] = 'e';
        else if(a[i] == 'F') a[i] = 'f';
        else if(a[i] == 'G') a[i] = 'g';
        else if(a[i] == 'H') a[i] = 'h';
        else if(a[i] == 'I') a[i] = 'i';
        else if(a[i] == 'J') a[i] = 'j';
        else if(a[i] == 'K') a[i] = 'k';
        else if(a[i] == 'L') a[i] = 'l';
        else if(a[i] == 'M') a[i] = 'm';
        else if(a[i] == 'N') a[i] = 'n';
        else if(a[i] == 'O') a[i] = 'o';
        else if(a[i] == 'P') a[i] = 'p';
        else if(a[i] == 'Q') a[i] = 'q';
        else if(a[i] == 'R') a[i] = 'r';
        else if(a[i] == 'S') a[i] = 's';
        else if(a[i] == 'T') a[i] = 't';
        else if(a[i] == 'U') a[i] = 'u';
        else if(a[i] == 'V') a[i] = 'v';
        else if(a[i] == 'W') a[i] = 'w';
        else if(a[i] == 'X') a[i] = 'x';
        else if(a[i] == 'Y') a[i] = 'y';
        else if(a[i] == 'Z') a[i] = 'z';
    }
    for (int i = 0; i < b.size(); ++i)
    {
        if(b[i] == 'A') b[i] = 'a';
        else if(b[i] == 'B') b[i] = 'b';
        else if(b[i] == 'C') b[i] = 'c';
        else if(b[i] == 'D') b[i] = 'd';
        else if(b[i] == 'E') b[i] = 'e';
        else if(b[i] == 'F') b[i] = 'f';
        else if(b[i] == 'G') b[i] = 'g';
        else if(b[i] == 'H') b[i] = 'h';
        else if(b[i] == 'I') b[i] = 'i';
        else if(b[i] == 'J') b[i] = 'j';
        else if(b[i] == 'K') b[i] = 'k';
        else if(b[i] == 'L') b[i] = 'l';
        else if(b[i] == 'M') b[i] = 'm';
        else if(b[i] == 'N') b[i] = 'n';
        else if(b[i] == 'O') b[i] = 'o';
        else if(b[i] == 'P') b[i] = 'p';
        else if(b[i] == 'Q') b[i] = 'q';
        else if(b[i] == 'R') b[i] = 'r';
        else if(b[i] == 'S') b[i] = 's';
        else if(b[i] == 'T') b[i] = 't';
        else if(b[i] == 'U') b[i] = 'u';
        else if(b[i] == 'V') b[i] = 'v';
        else if(b[i] == 'W') b[i] = 'w';
        else if(b[i] == 'X') b[i] = 'x';
        else if(b[i] == 'Y') b[i] = 'y';
        else if(b[i] == 'Z') b[i] = 'z';
    }

    if(a == b) cout << 0 << endl;
    else if (a > b) cout << 1 << endl;
    else cout << -1 << endl;

	return 0;
}