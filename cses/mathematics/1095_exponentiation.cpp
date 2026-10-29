// Exponentiation (CSES 1095)
// https://cses.fi/problemset/task/1095
// a^b mod 1e9+7 with binary exponentiation.

#include <iostream>
using namespace std;
#define mod 1000000007
long long exp(long long a, int b)
{
    long long ans = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cout << exp(a, b) << "\n";
    }
}