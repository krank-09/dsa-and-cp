// Prepend and Append (Codeforces 1791C)
// https://codeforces.com/problemset/problem/1791/C
// Strip ends while s[l] != s[r]; what is left is the original.

#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;  

    int l = 0, r = n - 1;
    while (l < r && s[l] != s[r]) {
        l++;
        r--;
    }

    cout << (r - l + 1) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}