// Number Spiral (CSES 1071)
// https://cses.fi/problemset/task/1071
// The layer is max(x, y); its parity decides which way the numbers run.

#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        long long y, x;
        cin >> y >> x;
        long long z = max(x, y);
        long long ans;
        if(z % 2 == 0) {
            if(y == z) ans = z*z - x + 1;
            else ans = (z - 1)*(z - 1) + y;
        } else {
            if(x == z) ans = z*z - y + 1;
            else ans = (z - 1)*(z - 1) + x;
        }
        cout << ans << "\n";
    }
    return 0;
}
