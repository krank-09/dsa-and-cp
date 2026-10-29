// Extremely Round (Codeforces 1766A)
// https://codeforces.com/problemset/problem/1766/A
// 9 per extra digit plus the leading digit: 9(d - 1) + first digit.

#include<iostream>
#include<string>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t ; cin >> t ;
    
    while(t--){
        string n ; cin >> n ;
        int d = n.length() ;
        int firstdig = n[0] - '0' ;
        int ans = 9 * (d - 1) + firstdig ;
        cout << ans << "\n" ;
    }
}