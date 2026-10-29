// Twin Permutations (Codeforces 1831A)
// https://codeforces.com/problemset/problem/1831/A
// Set b_i = n + 1 - a_i so every sum is n + 1.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        for (int i = 0; i < n; i++)
        {
            cout << (n + 1 - v[i]);
            if (i < n - 1)
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}