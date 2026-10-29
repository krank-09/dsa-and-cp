// Trailing Zeros (CSES 1618)
// https://cses.fi/problemset/task/1618
// Count factors of 5 in n!: n/5 + n/25 + n/125 + ...

#include<iostream>
using namespace std;
signed main(){
    int n; cin >> n;
    int count = 0;
    for (int i = 5; n / i > 0; i *= 5) // checks numbers of the form 5, 25, 125, etc.
    {
        count += n / i;
    }
    cout << count;
}