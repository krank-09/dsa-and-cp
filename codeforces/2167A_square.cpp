// Square? (Codeforces 2167A)
// https://codeforces.com/problemset/problem/2167/A
// YES if all four sticks are equal.

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == b && b == c && c == d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
