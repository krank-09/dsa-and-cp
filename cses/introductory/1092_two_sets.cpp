// Two Sets (CSES 1092)
// https://cses.fi/problemset/task/1092
// Possible only if n(n+1)/2 is even; fill one set greedily from n down.

#include <iostream>
using namespace std;
const int MAX = 1e6 + 5;
int seta[MAX], setb[MAX];
int main()
{
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;

    if (sum % 2 != 0)
    {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    long long target = sum / 2;
    int a = 0, b = 0;

    for (int i = n; i >= 1; --i)
    {
        if (target >= i)
        {
            seta[a++] = i;
            target -= i;
        }
        else
        {
            setb[b++] = i;
        }
    }
    cout << a << "\n";
    for (int i = 0; i < a; i++)
    {
        cout << seta[i] << " ";
    }
    cout << "\n";
    cout << b << "\n";
    for (int i = 0; i < b; i++)
    {
        cout << setb[i] << " ";
    }
    cout << "\n";
    return 0;
}
