// Exponentiation II (CSES 1712)
// https://cses.fi/problemset/task/1712
// a^(b^c) mod p: by Fermat, compute b^c mod (p - 1) first.
// TODO: power() ignores its third argument and always reduces mod 1e9+7, so the
// exponent b^c is taken mod p instead of p - 1. Fails when b^c >= p - 1.

#include <iostream>
using namespace std;
#define mod 1000000007
long long power(long long a, long long b, long long c) {
    long long res = 1;
    a %= mod;
    if (a == 0 && b == 0 && c == 0) {
        return 1;
    }
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long exponent = power(b, c, mod - 1);
        long long result = power(a, exponent, mod);
        cout << result << "\n";
    }
}
