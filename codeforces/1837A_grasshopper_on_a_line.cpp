// Grasshopper on a Line (Codeforces 1837A)
// https://codeforces.com/problemset/problem/1837/A
// One jump if k does not divide x, otherwise x - 1 and 1.

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, k, count = 0;
        cin >> x >> k;

        if (x % k == 0){
            cout << "2\n";
            cout << (x-1) << " " << 1 << "\n";
        }
        else{
            cout << "1\n";
            cout << x << "\n" ;
        }
    }
}