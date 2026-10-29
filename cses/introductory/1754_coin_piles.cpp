// Coin Piles (CSES 1754)
// https://cses.fi/problemset/task/1754
// YES iff (a + b) % 3 == 0 and the larger pile is at most twice the smaller.

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long total = a + b;
        if (total % 3 == 0 && min(a, b) * 2 >= max(a, b))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
