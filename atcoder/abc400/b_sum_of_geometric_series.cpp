// ABC400 B - Sum of Geometric Series
// https://atcoder.jp/contests/abc400/tasks/abc400_b
// Add powers of N one by one and stop once the sum passes 1e9.

#include<iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long sum = 0;
    long long term = 1; 

    for (int i = 0; i <= m; i++) {
        sum += term;

        if (sum > 1e9) {
            cout << "inf";
            return 0;
        }

        
        if (i < m) {
            if (term > 1e9 / n) {
                cout << "inf";
                return 0;
            }
            term *= n;
        }
    }
    cout << sum;
}
