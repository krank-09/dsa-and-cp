// Two Knights (CSES 1072)
// https://cses.fi/problemset/task/1072
// All pairs minus attacking pairs: k^2(k^2-1)/2 - 4(k-1)(k-2).

#include <iostream>
using namespace std;
void nonAttack(int k)
{
    int x = (k * k) * (k * k - 1) / 2;
    int y = 4 * (k - 1) * (k - 2);
    cout << x - y << endl;
}
int main()
{

    int n;
    cin >> n;
    nonAttack(n);
}
