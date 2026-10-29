// Walking Master (Codeforces 1806A)
// https://codeforces.com/problemset/problem/1806/A
// Need d >= b and (d - b) >= (c - a); answer 2(d - b) - (c - a).

#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc ; cin >> tc ;
    while(tc--){
        int a , b , c, d ;
        cin >> a >> b >> c >> d ;
        int p = d - b ;
        int q = (d-b) - (c-a) ;
        if (p < 0 || q < 0) cout << -1 << "\n" ;
        else {
            int ans = (2*(d-b)-(c-a));
            cout << ans << "\n";
        }
    }
}