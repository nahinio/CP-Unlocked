#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int possiblePalindrome(string s) {
    if (isPalindrome(s)) 
        return 0;


    string first = s;    
    string last = s;
    last.pop_back();
    first.erase(first.begin());
    if (isPalindrome(last) && isPalindrome(first)) 
        return -1;

    return 1;
}

int main() {
    int n;
    cin >> n;

    while (n--)
    {
        int t;
        cin >> t;
        string s;
        cin >> s;

        if (possiblePalindrome(s) == 0)
            cout << "0\n";
        else if (possiblePalindrome(s) == -1)
            cout << "-1\n";
        else
            cout << "1\n";  
    }
}